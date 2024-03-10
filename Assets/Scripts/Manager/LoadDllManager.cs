using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
        // 初始化Addressables，让它应用设置好的资源定位器
        yield return Addressables.InitializeAsync();
        //加载热更程序集
        yield return StartCoroutine(LoadHotFixDll());
#if !UNITY_EDITOR
        // 非编辑模式加载aot元数据
        yield return StartCoroutine(LoadAotDll());

#endif
        //加载菜单场景
        LoadAssetScene();
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
#if UNITY_EDITOR
        Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
        if (hotUpdateAss != null)
        {
            Debug.Log("已经加载热更DLL");
            yield break;
        }
#endif
        // 加载热更DLL
        // 这里使用标签来加载资源 Addressables会自动根据标签来加载所有资源
        yield return waitHandle = Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null);
        List<TextAsset> dlls = waitHandle.Result as List<TextAsset>;
        if (dlls == null)
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


    private void LoadAssetScene()
    {
        // 加载菜单场景
        Addressables.LoadSceneAsync(hotUpdateMainSceneRef, LoadSceneMode.Additive).Completed += (handle) =>
        {
            Debug.Log("加载资源场景完成");
        };
    }

}
