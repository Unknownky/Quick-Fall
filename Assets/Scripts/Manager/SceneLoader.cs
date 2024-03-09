using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;


/// <summary>
/// 用于加载场景的类
/// </summary>
public class SceneLoader : MonoBehaviour
{
    public Scene teachScene;

    public WaitUntil waitUntilAnimationEnd;

    public static SceneLoader instance;
    private AsyncOperationHandle loadHandle;

    private Scene loadedScene;

    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
        }
        instance = this;
    }

    #region 公共方法
    public void FromMainMenuLoadTeachScene()
    {
        StartCoroutine(FromMainMenuLoadTeachSceneReally());
    }

    /// <summary>
    /// 使用Addressables单独加载场景
    /// </summary>
    /// <param name="addressableSceneName">Addressable场景名</param>
    public void AddressablesLoadSceneSingle(string addressableSceneName)
    {
        loadHandle = Addressables.LoadSceneAsync(addressableSceneName, LoadSceneMode.Single);
        loadHandle.Completed += OnAddressablesLoadSceneSingleCompleted;
    }

    #endregion

    //加载场景完成后的回调
    private void OnAddressablesLoadSceneSingleCompleted(AsyncOperationHandle handle)
    {
        StartCoroutine(OnAddressablesLoadSceneSingleCompletedReally(handle));
    }


    IEnumerator OnAddressablesLoadSceneSingleCompletedReally(AsyncOperationHandle handle)
    {
        loadedScene = (Scene)handle.Result;
        //先不激活加载后的场景
        SceneManager.SetActiveScene(loadedScene);
        yield return waitUntilAnimationEnd; //等待动画结束
        //TODO：播放加载完成动画

        //激活加载后的场景
        SceneManager.SetActiveScene(loadedScene);
    }

    //由于是小游戏这里直接采用动画转场的方式，动画由一个专门的幕布来实现
    IEnumerator FromMainMenuLoadTeachSceneReally()
    {
        //TODO：播放加载动画

        loadHandle = Addressables.LoadSceneAsync("TeachScene", LoadSceneMode.Additive);
        loadHandle.Completed += (handle) =>
        {
            //卸载加载前的场景
            Debug.Log("加载完成");
            SceneManager.UnloadSceneAsync("MainMenu");
        };
        yield return loadHandle;
        // await loadHandle.Task; //等待加载完成
        yield return waitUntilAnimationEnd; //等待动画结束
        //TODO：播放加载完成动画

        //移除加载前的场景
        // UnLoadLoadedScene();
    }


    public void UnLoadLoadedScene()
    {
        Addressables.UnloadSceneAsync(loadHandle);
    }
}
