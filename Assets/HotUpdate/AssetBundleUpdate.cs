using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using QFSW.QC;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// 根据资源包标签，一起下载资源包
/// </summary>
public class AssetBundleUpdate : MonoBehaviour
{
    [Tooltip("需要下载的资源组标签"), SerializeField] private List<AssetLabelReference> assetBundleLables;

    [Tooltip("需要快速获取的资源的标签")] public AssetLabelReference assetLabelForFastGet;

    public List<IResourceLocation> resourceLocations; //保存资源位置，用于之后使用字典获取需要快速获取的资源

    public Text progressText;

    private long totalDownloadSize = 0;

    private Assembly systemAssembly;
    private void Start()
    {
        Debug.Log("开始检查资源更新!!!");
        if (progressText == null)
        {
            progressText = GameObject.Find("ProgressText").GetComponent<Text>();
        }
        //首先获取需要更新的资源的大小
        //然后询问用户是否下载
        //做到一起下载资源
        GetDownLoadSizeThenAskForDownLoad();
        systemAssembly = Assembly.Load("Assembly-CSharp");
        LoadFastGetAssets();
    }


    private void LoadFastGetAssets()
    {
        if (assetLabelForFastGet != null)
            Addressables.LoadResourceLocationsAsync(assetLabelForFastGet.labelString).Completed += OnLoadFastGetAssetsCompleted;
    }

    private void OnLoadFastGetAssetsCompleted(AsyncOperationHandle<IList<IResourceLocation>> handle)
    {
        if (handle.Status == AsyncOperationStatus.Failed)
        {
            progressText.text = "获取需要快速获取的资源失败，请检查网络连接,一秒后重试";
            Debug.Log("获取需要快速获取的资源失败，请检查网络连接,一秒后重试");
            Invoke("LoadFastGetAssets", 1);
            return;
        }
        resourceLocations = (List<IResourceLocation>)handle.Result;
        Debug.Log("获取需要快速获取的资源成功");
    }

    private void GetDownLoadSizeThenAskForDownLoad()
    {
        Addressables.GetDownloadSizeAsync(assetBundleLables).Completed += OnGetDownloadSizeCompleted;
    }

    private void OnGetDownloadSizeCompleted(AsyncOperationHandle<long> handle)
    {
        if (handle.Status == AsyncOperationStatus.Failed)
        {
            progressText.text = "获取资源大小失败，一秒后重试，请检查网络连接";
            Debug.Log("获取资源大小失败，一秒后重试，请检查网络连接");
            Invoke("GetDownLoadSize", 1);
            return;
        }
        totalDownloadSize = handle.Result;
        progressText.text = "需要下载的资源大小为：" + totalDownloadSize;
        Debug.Log("需要下载的资源大小为：" + totalDownloadSize);
        //TODO:询问用户是否下载
        Debug.Log("同意下载");
        //开始下载资源
        PrintDownLoadLabels();
        StartCoroutine(DownLoadAssetBundles());
    }

    private void PrintDownLoadLabels()
    {
        string labels = "";
        foreach (var item in assetBundleLables)
        {
            labels += item.labelString + " ";
        }
        Debug.Log("需要下载的资源标签为：" + labels);
    }

    private IEnumerator DownLoadAssetBundles()
    {
        AsyncOperationHandle downloadHandle = Addressables.DownloadDependenciesAsync(assetBundleLables, Addressables.MergeMode.Union, false);
        float progress = 0;
        while (!downloadHandle.IsDone)
        {
            float percentageComplete = downloadHandle.GetDownloadStatus().Percent;
            if (percentageComplete > progress * 1.01f) // Report at most every 10% or so
            {
                progress = percentageComplete; // More accurate %
                progressText.text = $"下载进度: {progress * 100}%";
                Debug.Log($"Download progress: {progress * 100}%");
            }
            yield return null;
        }
        yield return downloadHandle;
        progressText.text = "资源加载完成:点击屏幕继续";
        StartCoroutine(WaitForClikLoadMainMenu());
        Debug.Log("资源下载完成");
        Addressables.Release(downloadHandle);
    }

    IEnumerator WaitForClikLoadMainMenu()
    {
        while (true)
        {
            if (Input.GetMouseButtonDown(0))
            {
                //反射获取SceneLoader类型的instance字段，调用AddressablesLoadSceneSingle方法
                Type type = systemAssembly.GetType("SceneLoader");
                FieldInfo instanceField = type.GetField("instance");
                object instance = instanceField.GetValue(null);
                MethodInfo method = type.GetMethod("AddressablesLoadSceneSingle");
                method.Invoke(instance, new object[] { "MainMenu" });
                break;
            }
            yield return null;
        }
    }
}
