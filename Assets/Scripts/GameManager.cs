using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text TimeText;

    public Text MaxScore;

    public Text AdditionalScoreText;

    public static GameManager instance;

    public GameObject GameOverPanelUI;

    public float levelScap = 0.02f;

    public float delayTime = 1.5f;

    private int additionalScore = 0;
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
        }
        instance = this;
        Time.timeScale = 1.0f;
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


    public void AddScore(int score)
    {
        additionalScore += score;
        AdditionalScoreText.text = additionalScore.ToString();
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
