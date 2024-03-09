using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using Sirenix.OdinInspector;
using UnityEditor;

public class GameManager : MonoBehaviour
{
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public Text TimeText;
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public Text MaxScore;
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public Text AppleCountText;
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public Text OrangeCountText;
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public TMP_Text currentScoreText;
    [TabGroup("UI"), SceneObjectsOnly, InlineButton("SelectObject", "Select")]
    public GameObject GameOverPanelUI;

    public static GameManager instance;

    [TabGroup("Game Setting")]
    public float levelScap = 0.02f;
    [TabGroup("Game Setting")]
    public float delayTime = 1.5f;
    [TabGroup("Game Setting"), Required]
    public string sceneName;

    [ShowInInspector]
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
        Debug.Log(Time.timeScale);
        SceneLoader.instance.AddressablesLoadSceneSingle(sceneName);
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
        int currentScore = (int)Time.timeSinceLevelLoad + instance.additionalScore;
        if (currentScore > maxScore)
        {
            PlayerPrefs.SetInt("MaxScore", currentScore);
        }
        instance.MaxScore.text = PlayerPrefs.GetInt("MaxScore", 0).ToString();
        instance.currentScoreText.text = currentScore.ToString();
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
    public void LevelUpdate()
    {
        Time.timeScale += levelScap * Time.deltaTime;
    }

    public void Quit()
    {
        Application.Quit();
    }

    #region FunctionsForOdin 
#if UNITY_EDITOR
    private void SelectObject(Object obj)
    {
        if (obj)
            Selection.activeObject = obj;
    }
#endif
    #endregion
}
