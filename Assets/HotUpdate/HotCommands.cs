using System.Collections;
using System.Collections.Generic;
using QFSW.QC;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

/// <summary>
/// 用于添加控制台的命令
/// </summary>
public class HotCommands : MonoBehaviour
{
    GameObject QcConsole;

    private void Start() {
        QcConsole = gameObject.transform.GetChild(0).gameObject;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.F1))
        {
            QcConsole.SetActive(!QcConsole.activeSelf);
        }
    }

    [Command]
    public static void LoadMenu()
    {
        // 加载菜单场景
        Addressables.LoadSceneAsync("MainMenu", LoadSceneMode.Single).Completed += (handle) =>
        {
            Debug.Log("加载菜单场景完成");
        };
    }

    [Command]
    //回到主菜单，要注意跨场景的物体，避免出现问题，主要用于测试
    public static void BackToAssetScene()
    {
        Time.timeScale = 1f; //时间恢复正常,避免游玩中途退出后，时间缩放不正常
         // 加载菜单场景
        Addressables.LoadSceneAsync("AssetScene", LoadSceneMode.Single).Completed += (handle) =>
        {
            Debug.Log("加载资源加载场景完成");
        };

    }
}
