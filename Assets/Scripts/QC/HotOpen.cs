using System.Collections;
using System.Collections.Generic;
using QFSW.QC;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

public class HotOpen : MonoBehaviour
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
}
