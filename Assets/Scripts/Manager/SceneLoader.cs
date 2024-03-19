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

    [BoxGroup("ScenePropertied"), ShowInInspector]
    public static string currentSceneName;
    [BoxGroup("ScenePropertied"), ShowInInspector]
    public static Action OnSceneLoadComplete; //场景加载完成的回调,用于其他类加载场景后方法的挂载调用

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
        else
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
        //暂停其他的加载场景的协程，避免多次加载场景
        StopAllCoroutines();
        StartCoroutine(AddressablesLoadSceneSingleReally(addressableSceneName));
    }

    #endregion

    IEnumerator AddressablesLoadSceneSingleReally(string addressableSceneName)
    {
        Debug.Log($"SceneLoader开始加载场景{addressableSceneName}");
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
        StoreCurrentSceneName(addressableSceneName); //每次加载场景后存储加载后的场景名
        OnSceneLoadComplete?.Invoke(); //场景加载完成后的回调
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

    private void StoreCurrentSceneName(string sceneName)
    {
        currentSceneName = sceneName;
    }
}
