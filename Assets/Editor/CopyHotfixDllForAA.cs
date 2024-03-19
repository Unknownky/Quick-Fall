using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HybridCLR.Editor;
using UnityEditor;
using System.IO;

// 用于将热更程序集拷贝到StreamingAssets目录下
public class CopyHotUpdateAssemblyToStreamingAsset : MonoBehaviour
{

    static string assembliesDstDirForAddressable =  "Assets/HotUpdateDllBytes"; // Addressable的bytes资源目录

    // static string hotfixAssembliesDstDir = Application.streamingAssetsPath; // StreamingAssets目录

    [MenuItem("Build/CopyHotUpdateAssembliesToAddressable")]
    public static void CopyHotUpdateAssembliesToStreamingAssets()
    {
        var target = EditorUserBuildSettings.activeBuildTarget;
        string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target); // 热更程序集输出目录
        //项目中的HotUpdateDllBytes文件夹地址即Assets/HotUpdateDllBytes
        foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved) // 遍历热更程序集
        {
            string dllPath = $"{hotfixDllSrcDir}/{dll}";

            // string dllBytesPath = $"{hotfixAssembliesDstDir}/{dll}.bytes";
            string dllBytesPathForAddressable = $"{assembliesDstDirForAddressable}/{dll}.bytes";
            File.Copy(dllPath, dllBytesPathForAddressable, true); // 拷贝热更程序集到Addressable的bytes资源目录
            Debug.Log($"[copy hotfix dll {dllPath} -> {dllBytesPathForAddressable} success!");
        }
    }

    [MenuItem("Build/CopyStripedAotdllsToAddressable")]
    public static void CopyStripedAotdllsToStreamingAssets()
    {
        var target = EditorUserBuildSettings.activeBuildTarget;
        string aotDllSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target); //aot程序集输出目录
        //项目中的HotUpdateDllBytes文件夹地址即Assets/HotUpdateDllBytes
        foreach (var dll in SettingsUtil.AOTAssemblyNames) // 遍历热更程序集
        {
            string dllPath = $"{aotDllSrcDir}/{dll}";
            // string dllBytesPath = $"{hotfixAssembliesDstDir}/{dll}.bytes";
            string dllBytesPathForAddressable = $"{assembliesDstDirForAddressable}/{dll}.bytes";
            File.Copy(dllPath, dllBytesPathForAddressable, true); // 拷贝aot程序集到Addressable的bytes资源目录
            Debug.Log($"[copy hotfix dll {dllPath} -> {dllBytesPathForAddressable} success!");
        }
    }

}
