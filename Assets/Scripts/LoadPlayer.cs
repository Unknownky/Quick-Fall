using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.AddressableAssets;

public class LoadPlayer : MonoBehaviour
{
    public static GameObject player;

    [SerializeField] private Vector3 playerPosition;

    private void Start() {
        Addressables.LoadAssetAsync<GameObject>("Player").Completed += OnLoadDone;
        playerPosition = GameObject.Find("InitPosition").transform.position;
    }

    private void OnLoadDone(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<GameObject> obj) {
        player = obj.Result;
        Instantiate(player, playerPosition, Quaternion.identity);   
    }


}
