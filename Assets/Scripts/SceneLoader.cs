using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

/// <summary>
/// 用于加载场景的类
/// </summary>
public class SceneLoader : MonoBehaviour
{
    public Scene teachScene;

    public WaitUntil waitUntilAnimationEnd;

    private AsyncOperation asyncOperation;

    private void Awake()
    {
        Addressables.LoadAssetAsync<Scene>("TeachScene").Completed += handle =>
        {
            teachScene = handle.Result;
            Logger.Log("TeachScene loaded");
        };
    }

    #region 公共方法
    public void FromMainMenuLoadTeachScene()
    {
        StartCoroutine(FromMainMenuLoadTeachSceneReally());
    }


    #endregion



    //由于是小游戏这里直接采用动画转场的方式，动画由一个专门的幕布来实现
    IEnumerator FromMainMenuLoadTeachSceneReally()
    {
        //TODO：播放加载动画

        var asyncOperation = SceneManager.LoadSceneAsync(teachScene.name, LoadSceneMode.Additive);
        yield return asyncOperation;  //等待加载完成
        yield return waitUntilAnimationEnd; //等待动画结束
        //TODO：播放加载完成动画

        //移除加载前的场景
        UnLoadCurrentScene();
    }


    public void UnLoadCurrentScene()
    {
        SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene());
    }
}
