using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 修复角色异常死亡的补丁，打开界面时就删除角色
/// </summary>
public class PlayerDeadFix : MonoBehaviour
{
    GameObject playerGameObject;
    private void OnEnable() {
        if(playerGameObject == null){
            playerGameObject = GameObject.Find("Player(Clone)");
        }
        if (playerGameObject != null)
            Destroy(playerGameObject);
    }
        
}
