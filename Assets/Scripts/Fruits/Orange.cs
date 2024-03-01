using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orange : MonoBehaviour
{
    public int score = 6;

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
            GameManager.instance.AddScore(score);
            collectedAnimator.Play("Collected_n");
            PlayerController.instance.PlayerMatchless(matchlessTime);
            gameObject.SetActive(false);
        }
    }
}
