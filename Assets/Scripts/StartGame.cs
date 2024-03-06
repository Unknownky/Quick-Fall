using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public GameObject player;

    private void Start() {
        LoadPlayer.OnPlayerLoaded += StorePlayer;
    }

    private void StorePlayer() {
        player = GameObject.Find("Player(Clone)");
        LoadPlayer.OnPlayerLoaded -= StorePlayer;//卸载事件
    }

    private void Update()
    {
        if (player != null)
        {
            if (transform.position.y > player?.transform.position.y)
                SceneManager.LoadScene(1);
        }
    }

}
