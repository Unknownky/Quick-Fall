using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using Sirenix.OdinInspector;
using UnityEditor;
using System.Reflection;
using System.Linq;
using System;

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
    public Dictionary<string, int> fruits = new Dictionary<string, int>();

    [SerializeField] private Dictionary<string, int> fruitScores = new Dictionary<string, int>();

    private Assembly hotUpdateAssembly; //热更新程序集信息，用于与Requester交互

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
#if UNITY_EDITOR
        hotUpdateAssembly = System.AppDomain.CurrentDomain.GetAssemblies().First(assembly => assembly.GetName().Name == "HotUpdate");
        #else
            hotUpdateAssembly = Assembly.Load("HotUpdate"); //获取热更新程序集信息
        #endif
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

        //给Requester发送游戏结束的消息
        Type RequesterType = hotUpdateAssembly.GetType("Requester");
        //反射获取Requester的instance字段
        FieldInfo instanceField = RequesterType.GetField("instance");
        //获取Requester的实例
        object requesterInstance = instanceField.GetValue(null);
        //通过反射获取Requester的OnGameOverForRequester委托字段并调用委托
        FieldInfo onGameOverForRequester = RequesterType.GetField("OnGameOverForRequester");
        Action onGameOverForRequesterDelegate = (Action)onGameOverForRequester.GetValue(requesterInstance);
        onGameOverForRequesterDelegate?.Invoke();
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

    #region 提供给Requester调用的方法



    #endregion


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
    private void SelectObject(UnityEngine.Object obj)
    {
        if (obj)
            Selection.activeObject = obj;
    }
#endif
    #endregion
}
