using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using HybridCLR;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;

//进行aot元数据的加载以及热更程序集的加载
public class LoadDllManager : MonoBehaviour
{
    // Addressables中资源的标签和引用
    // 也可以使用Addressables.LoadAssetAsync<T>(path)来加载资源 dll aot 资源
    // 这里使用标签和引用来加载资源 是为了简单
    public AssetLabelReference hotUpdateDllLabelRef; // 热更DLL标签
    public AssetLabelReference aotMetadataDllLabelRef; // AOT元数据DLL标签
    public AssetReference hotUpdateMainSceneRef; // 热更主场景

    private AsyncOperationHandle waitHandle;

    private void Start()
    {
        StartCoroutine(InitTask());
    }

    IEnumerator InitTask()
    {
        //检查资源更新 
        yield return _update_address_ables();
        //加载热更程序集
        yield return LoadHotFixDll();
        //加载aot元数据
        yield return LoadAotDll();
        //加载菜单场景
        LoadMenuScene();
    }

    private IEnumerator _update_address_ables()
    {
        // 初始化Addressables
        Debug.Log("初始化Addressables");
        yield return Addressables.InitializeAsync();

        // 检查文件更新
        // 这一步会根据Addressables中的资源组来依次检查更新
        // 打包后 会 从配置中的RemoteBuildPath中下载资源
        // Addressables 会自动根据catalog中各个资源的hash值来判断是否需要更新

        Debug.Log("检查文件更新");
        waitHandle = Addressables.CheckForCatalogUpdates();

        yield return waitHandle;

        if(!waitHandle.IsDone)
        {
            Debug.Log("检查文件更新失败");
            yield break;
        }

        if (waitHandle.DebugName == "InvalidHandle")
        {
            Debug.Log("没有需要更新的资源");
            yield break;
        }
        List<string> catalogs = waitHandle.Result as List<string>; //获取需要更新的catalog

        if (catalogs.Count <= 0)
        {
            //没有需要更新的资源
            Debug.Log("没有需要更新的资源");
            yield break;
        }

        //需要更新资源  则 根据catalogs 拿到需要更新的资源位置 
        yield return waitHandle = Addressables.UpdateCatalogs(catalogs, true);

        List<IResourceLocator> resourceLocators = waitHandle.Result as List<IResourceLocator>;
        Debug.Log($"需要更新:{resourceLocators.Count}个资源");

        foreach (IResourceLocator resourceLocator in resourceLocators)
        {
            Debug.Log($"开始下载资源:{resourceLocator}");
            yield return StartCoroutine(_download(resourceLocator));
            Debug.Log($"下载资源:{resourceLocator}完成");
        }
    }

    private IEnumerator _download(IResourceLocator resourceLocator)
    {
        yield return waitHandle = Addressables.GetDownloadSizeAsync(resourceLocator.Keys);
        long size = (long)waitHandle.Result;

        if (size <= 0) yield break;

        Debug.Log($"更新:{resourceLocator}资源,总大小:{size}");

        waitHandle = Addressables.DownloadDependenciesAsync(resourceLocator.Keys, Addressables.MergeMode.Union);
        float progress = 0;
        while (waitHandle.Status == AsyncOperationStatus.None)
        {
            float percentageComplete = waitHandle.GetDownloadStatus().Percent;
            if (percentageComplete > progress * 1.01) // Report at most every 10% or so
            {
                progress = percentageComplete; // More accurate %
                print($"下载百分比：{progress * 100}%");
            }

            yield return null;
        }

        yield return waitHandle;

        Debug.Log("更新完毕!");
        Addressables.Release(waitHandle);
    }


    private IEnumerator LoadAotDll()
    {
        //这一步实际上是为了解决AOT 泛型类的问题 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        if (aotMetadataDllLabelRef == null)
        {
            Debug.Log("AOT元数据DLL标签为空");
            yield break;
        }
        yield return waitHandle = Addressables.LoadAssetsAsync<TextAsset>(aotMetadataDllLabelRef, null);

        List<TextAsset> aots = waitHandle.Result as List<TextAsset>; //获取AOT元数据DLL
        if (aots != null) //加载AOT元数据DLL
        {
            foreach (var asset in aots)
            {
                LoadImageErrorCode errorCode = RuntimeApi.LoadMetadataForAOTAssembly(asset.bytes, mode);
                if (errorCode == LoadImageErrorCode.OK)
                {
                    Debug.Log($"加载AOT元数据DLL:{asset.name}成功");
                    continue;
                }

                Debug.Log($"加载AOT元数据DLL:{asset.name}失败,错误码:{errorCode}");
            }

        }
        else
        {
            Debug.Log("AOT元数据加载错误");
        }

    }

    private IEnumerator LoadHotFixDll()
    {
        // 加载热更DLL
        // 这里使用标签来加载资源 Addressables会自动根据标签来加载所有资源
        yield return waitHandle = Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null); 
        List<TextAsset>dlls = waitHandle.Result as List<TextAsset>;
        if(dlls == null)
        {
            Debug.Log("无热更DLL");
            yield break;
        }
        foreach (var asset in dlls)
        {
            Debug.Log("加载热更DLL:" + asset.name);
            Assembly.Load(asset.bytes);
            Debug.Log("加载热更DLL:" + asset.name + "完成");

        }
    }


    private void LoadMenuScene()
    {
        // 加载菜单场景
        Addressables.LoadSceneAsync(hotUpdateMainSceneRef, LoadSceneMode.Single).Completed += (handle) =>
        {
            Debug.Log("加载菜单场景完成");
        };
    }

}
