using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;

[RequireComponent(typeof(Animator))]
public class PlayerAniEquip : MonoBehaviour
{
    Animator playerAnimator;

    [BoxGroup("动画控制器")]
    private string animatorControlerFolderName = "Player"; // 动画控制器文件夹名字

    private void Awake()
    {
        playerAnimator = GetComponent<Animator>();
    }

    /// <summary>
    /// 设置动画控制器
    /// </summary>
    /// <param name="addressableAniController">动画控制机的名字</param>
    public void SetAniControllerEquip(string addressableAniController)
    {
        string aniControllerPath;
        if(addressableAniController == "FogPlayer")
            aniControllerPath = animatorControlerFolderName + "/" + addressableAniController + "/" + addressableAniController + ".controller";
        else
            aniControllerPath = animatorControlerFolderName + "/" + addressableAniController + "/" + addressableAniController + ".overrideController";
        Addressables.LoadAssetAsync<RuntimeAnimatorController>(addressableAniController).Completed += (handle) =>
        {
            playerAnimator.runtimeAnimatorController = handle.Result;
        };
    }
}
