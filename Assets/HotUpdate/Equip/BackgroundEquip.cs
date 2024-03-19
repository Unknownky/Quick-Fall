using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;

/// <summary>
/// 背景材质装配,从Requester中获取当前背景材质句柄，然后装配到场景中，用于背包系统
/// </summary>
public class BackgroundEquip : MonoBehaviour
{
    MeshRenderer backgroundRenderer;

    private AsyncOperationHandle backgroundMaterialHandle;

    public Action afterBackgroundMaterialLoaded;

    public static BackgroundEquip instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
        backgroundRenderer = GetComponent<MeshRenderer>();

    }

    private void Start()
    {
        EquipBackgroundMaterial();
    }

    /// <summary>
    /// 装备背景材质 
    /// </summary>
    public void EquipBackgroundMaterial()
    {
        backgroundMaterialHandle = Requester.instance.RequestBackground();
        backgroundMaterialHandle.Completed += OnBackgroundMaterialLoaded;
    }

    private void OnBackgroundMaterialLoaded(AsyncOperationHandle handle)
    {
        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            backgroundRenderer.material = handle.Result as Material;
            afterBackgroundMaterialLoaded?.Invoke();
        }
        else
        {
            Debug.LogError("背景材质加载失败");
        }
    }
}
