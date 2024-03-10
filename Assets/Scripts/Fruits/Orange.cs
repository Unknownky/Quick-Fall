using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orange : MonoBehaviour
{
    public float matchlessTime = 5f;

    private Animator collectedAnimator;

    private void Awake()
    {
        collectedAnimator = transform.parent.GetChild(1).GetComponent<Animator>();
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            GameManager.instance.AddFruitsCount("Orange", 1);
            collectedAnimator.Play("Collected_n");
            //播放拾取与无敌音效
            AudioManager.PlaySoundEffect("PickUpCoin");
            AudioManager.PlaySoundEffect("PowerUp");
            PlayerController.instance.PlayerMatchless(matchlessTime);
            gameObject.SetActive(false);
        }
    }
}
