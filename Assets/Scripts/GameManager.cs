using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text TimeText;

    public Text MaxScore;

    public Text AppleCountText;

    public Text OrangeCountText;

    public static GameManager instance;

    public GameObject GameOverPanelUI;

    public float levelScap = 0.02f;

    public float delayTime = 1.5f;

    private Dictionary<string, int> fruits = new Dictionary<string, int>();

    [SerializeField] private Dictionary<string, int> fruitScores = new Dictionary<string, int>();

    private int additionalScore = 0;
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
        }
        instance = this;
        Time.timeScale = 1.0f;
        fruits.Clear();
        fruits.Add("Apple", 0);
        fruits.Add("Orange", 0);
        fruitScores.Clear();
        fruitScores.Add("Apple", 2);
        fruitScores.Add("Orange", 6);
    }

    void Update()
    {
        TimeText.text = Time.timeSinceLevelLoad.ToString("00");
        LevelUpdate();
    }

    public void ReStartGame()
    {
        Time.timeScale = 1.0f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public static void GameOver(bool dead)
    {
        if (dead)
        {
            instance.StartCoroutine(instance.DelayGameOver(dead));
        }
    }

    IEnumerator DelayGameOver(bool dead)
    {
        yield return new WaitForSeconds(delayTime);
        Time.timeScale = 0;
        int maxScore = PlayerPrefs.GetInt("MaxScore", 0);
        if (Time.timeSinceLevelLoad + instance.additionalScore > maxScore)
        {
            PlayerPrefs.SetInt("MaxScore", (int)Time.timeSinceLevelLoad + instance.additionalScore);
        }
        instance.MaxScore.text = PlayerPrefs.GetInt("MaxScore", 0).ToString();
        instance.GameOverPanelUI.SetActive(true);
    }


    public void AddFruitsCount(string fruitName, int count)
    {
        fruits[fruitName] += count;
        switch (fruitName)
        {
            case "Apple":
                AppleCountText.text = "X " + fruits[fruitName].ToString();
                break;
            case "Orange":
                OrangeCountText.text = "X " + fruits[fruitName].ToString();
                break;
            default:
                break;
        }
        additionalScore += fruitScores[fruitName] * count;
    }

    //难度逐渐升级
    public void LevelUpdate(){
        Time.timeScale += levelScap * Time.deltaTime;
    }

    public void Quit()
    {
        Application.Quit();
    }
}
