using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

[RequireComponent(typeof(Animator))]
public class PlayerAniEquip : MonoBehaviour
{
    Animator playerAnimator;

    AsyncOperationHandle playerAniControllerHandle;

    public static PlayerAniEquip instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
        playerAnimator = GetComponent<Animator>();
    }

    private void Start()
    {
        EquipAniController(); 
    }


    /// <summary>
    /// 装备玩家动画控制器
    /// </summary>
    public void EquipAniController()
    {
        playerAniControllerHandle = Requester.instance.RequestAniController();
        playerAniControllerHandle.Completed += OnPlayerAniControllerLoaded;
    }


    private void OnPlayerAniControllerLoaded(AsyncOperationHandle handle)
    {
        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            playerAnimator.runtimeAnimatorController = handle.Result as RuntimeAnimatorController;
        }
        else
        {
            Debug.LogError("玩家动画控制器加载失败");
        }
    }
}
