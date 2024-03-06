using System;
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

    public static LoadPlayer instance;
    public static Action OnPlayerLoaded; //声明一个委托,用在加载完Player后调用，通过其他类进行调用

    private void Awake() {
        if (instance != null) {
            Destroy(gameObject);
        }
        instance = this;
    }

    private void Start() {
        Addressables.LoadAssetAsync<GameObject>("Player").Completed += OnLoadDone;
        playerPosition = GameObject.Find("InitPosition").transform.position;
    }

    private void OnLoadDone(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<GameObject> obj) {
        player = obj.Result;
        Debug.Log("通过网络获取玩家资源成功！");
        Instantiate(player, playerPosition, Quaternion.identity);
        OnPlayerLoaded.Invoke();
    }


}
