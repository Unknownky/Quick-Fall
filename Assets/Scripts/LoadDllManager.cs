using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using HybridCLR;
using UnityEngine;
using UnityEngine.AddressableAssets;
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

    public AsyncOperation waitHandle;

    private void Start()
    {
        //加载aot元数据
        // LoadAotDll();
        //加载热更程序集
        LoadHotFixDll();
    }

    private void LoadAotDll()
    {
        //这一步实际上是为了解决AOT 泛型类的问题 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        Addressables.LoadAssetsAsync<TextAsset>(aotMetadataDllLabelRef, null).Completed += (handle) =>
        {
            var aots = handle.Result;
            if (aots.Count != 0)
            {
                foreach (var asset in aots)
                {
                    LoadImageErrorCode errorCode = RuntimeApi.LoadMetadataForAOTAssembly(asset.bytes, mode);
                    if (errorCode == LoadImageErrorCode.OK)
                    {
                        continue;
                    }

                    Debug.LogError($"加载AOT元数据DLL:{asset.name}失败,错误码:{errorCode}");
                }

            }

        };

    }

    private void LoadHotFixDll()
    {
        // 加载热更DLL
        // 这里使用标签来加载资源 Addressables会自动根据标签来加载所有资源
        Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null).Completed += (handle) =>
        {
            var dlls = handle.Result;
            foreach (var asset in dlls)
            {
                Debug.Log("加载热更DLL:" + asset.name);
                Assembly.Load(asset.bytes);
                Debug.Log("加载热更DLL:" + asset.name + "完成");

            }
            //加载菜单场景
            LoadMenuScene();
        };
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