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
    [TabGroup("SystemProperties"), ShowInInspector, OnValueChanged("TestSceneMusic"), ReadOnly, InfoBox("当前场景名")]
    private string currentSceneName;

    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly, InfoBox("场景对应的音乐名")]
    private string sceneSwitchMusicName;

    private Type sceneLoaderType;

    private Type audioManagerType;


    private void Awake()
    {
        sceneLoaderType = Type.GetType("SceneLoader");
        audioManagerType = Type.GetType("AudioManager");
        Debug.Log(sceneLoaderType.GetTypeInfo());
        //通过反射获取SceneLoader的OnSceneLoadComplete委托字段并挂载一个方法
        var onSceneLoadComplete = sceneLoaderType.GetField("OnSceneLoadComplete");
        onSceneLoadComplete.SetValue(null, new Action(OnSceneLoadComplete_Listener));

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
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName });
    }


    /// <summary>
    /// 根据currentSceneName匹配音乐名
    /// </summary>
    private void SceneMusicSwitcher()
    {
        switch (currentSceneName)
        {
            case "MenuScene":
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


    private void TestSceneMusic()
    {
        SceneMusicSwitcher();
        var playMusicMethod = audioManagerType.GetMethod("PlayMusic");
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName });
    }
}
