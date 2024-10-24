using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CameraFollow : MonoBehaviour
{
    public static GameObject player;

    private CinemachineVirtualCamera vcam;

    private void Start() {
        LoadPlayer.OnPlayerLoaded += StorePlayer; //订阅事件
        Debug.Log("Virtual Camera load");
    }

    private void StorePlayer() {
        player = GameObject.Find("Player(Clone)");
        vcam = GetComponent<CinemachineVirtualCamera>();
        vcam.Follow = player.transform;
        player.GetComponent<PlayerController>().teachLevel = true; //设置教学关卡选项为true
        //卸载事件
        LoadPlayer.OnPlayerLoaded -= StorePlayer;
    }
}
