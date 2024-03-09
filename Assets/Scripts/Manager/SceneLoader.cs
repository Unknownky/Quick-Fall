using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
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

    [BoxGroup("Animation"), Required, SceneObjectsOnly]
    public GameObject curtain;
    [BoxGroup("Animation"), Required]
    public string originalAnimationName;
    [BoxGroup("Animation"), Required]
    public string inAnimationName;

    [BoxGroup("Animation"), Required]
    public string outAnimationName;


    public WaitUntil waitUntilInAnimationEnd;
    public WaitUntil waitUntilOutAnimationEnd;

    public static SceneLoader instance;

    //加载场景的句柄
    private AsyncOperationHandle loadHandle;

    private Animator animator;
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
        }
        instance = this;
        curtain.SetActive(true);
        animator = curtain.GetComponent<Animator>();
    }

    #region 公共方法

    /// <summary>
    /// 使用Addressables单独加载场景
    /// </summary>
    /// <param name="addressableSceneName">Addressable场景名</param>
    public void AddressablesLoadSceneSingle(string addressableSceneName)
    {
        StartCoroutine(AddressablesLoadSceneSingleReally(addressableSceneName));
    }

    #endregion

    IEnumerator AddressablesLoadSceneSingleReally(string addressableSceneName)
    {
        //播放加载动画，加载动画时长固定
        animator.Play(inAnimationName);
        yield return null; //等待一帧，确保动画机已经开始播放 ==》猜测动画机状态切换是在下一帧开始的
        waitUntilInAnimationEnd = new WaitUntil(() => animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1f);
        yield return waitUntilInAnimationEnd;
        //加载场景
        loadHandle = Addressables.LoadSceneAsync(addressableSceneName, LoadSceneMode.Single);
        //播放加载完成动画，加载完成动画由加载时长和动画时长最大值决定
        animator.Play(outAnimationName);
        yield return null; //等待一帧，确保动画机已经开始播放
        waitUntilOutAnimationEnd = new WaitUntil(() => animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1f);
        yield return waitUntilOutAnimationEnd;
        yield return loadHandle;
        //动画机回到初始状态
        animator.Play(originalAnimationName);
        Debug.Log($"加载场景{addressableSceneName}完成");
    }

    /// <summary>
    /// 卸载句柄场景
    /// </summary>
    public void UnLoadLoadedScene()
    {
        Addressables.UnloadSceneAsync(loadHandle);
    }
}
