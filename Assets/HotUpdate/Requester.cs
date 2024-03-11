using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Sirenix.OdinInspector;
using UnityEngine;

/// <summary>
/// 请求者，利用反射机制来对一些管理类进行请求
/// </summary>
public class Requester : MonoBehaviour
{
    [TabGroup("SystemProperties"), ShowInInspector, OnValueChanged("TestSceneMusic"), InfoBox("当前场景名")]
    public string currentSceneName { get; private set;} //节约性能让其他热更新脚本直接获取

    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly, InfoBox("场景对应的音乐名")]
    private string sceneSwitchMusicName;
    public Assembly systemAssembly; //反射信息只在Requester中使用，其他类不使用，便于管理

    public static Requester instance;
    public Type sceneLoaderType; //反射只在Requester中使用，其他类不使用，便于管理

    public Type audioManagerType; 


    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
        systemAssembly = Assembly.Load("Assembly-CSharp");  //通过反射从先前已经加载了的Assembly-CSharp程序集中获取SceneLoader和AudioManager的Type
        //通过反射从先前已经加载了的Assembly-CSharp程序集中获取SceneLoader和AudioManager的Type
        sceneLoaderType = systemAssembly.GetType("SceneLoader");  //Assembly.Load 方法会检查程序集是否已经加载。如果已经加载，它会返回已加载的程序集的引用，而不是再次加载它。
        audioManagerType = systemAssembly.GetType("AudioManager");
        Debug.Log(sceneLoaderType);
        //通过反射获取SceneLoader的静态委托字段并添加一个方法
        var onSceneLoadComplete = sceneLoaderType.GetField("OnSceneLoadComplete");
        Debug.Log(onSceneLoadComplete);
        onSceneLoadComplete.SetValue(null, (Action)OnSceneLoadComplete_Listener);
    
    }

    ~Requester()
    {
        //通过反射获取SceneLoader的OnSceneLoadComplete委托字段并移除一个方法
        var onSceneLoadComplete = sceneLoaderType.GetField("OnSceneLoadComplete");
        onSceneLoadComplete.SetValue(null, null);
    }

    private void OnSceneLoadComplete_Listener()
    {
        //通过反射获取SceneLoader的currentSceneName字段
        var currentSceneNameField = sceneLoaderType.GetField("currentSceneName");
        currentSceneName = (string)currentSceneNameField.GetValue(null);
        //通过反射获取AudioManager的PlayMusic方法
        SceneMusicSwitcher();
        var playMusicMethod = audioManagerType.GetMethod("PlayMusic");
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName, true, 1 });
    }


    /// <summary>
    /// 根据currentSceneName匹配音乐名
    /// </summary>
    private void SceneMusicSwitcher()
    {
        switch (currentSceneName)
        {
            case "MainMenu":
                sceneSwitchMusicName = "MenuMusic";
                break;
            case "SampleScene":
                sceneSwitchMusicName = "PlayMusic";
                break;
            case "TeachMenu":
                sceneSwitchMusicName = "MenuMusic";
                break;
            default:
                sceneSwitchMusicName = "MenuMusic";
                break;
        }
    }

    #region 公共方法
    public void AddressablesLoadSceneSingle(string addressableSceneName)
    {
        //通过反射获取SceneLoader的instance调用AddressablesLoadSceneSingle方法
        var instanceField = sceneLoaderType.GetField("instance");
        var instance = instanceField.GetValue(null);
        var method = sceneLoaderType.GetMethod("AddressablesLoadSceneSingle");
        method.Invoke(instance, new object[] { addressableSceneName });
    }

    #endregion  


    private void TestSceneMusic()
    {
        SceneMusicSwitcher();
        var playMusicMethod = audioManagerType.GetMethod("PlayMusic");
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName,true,1 });
    }
}
