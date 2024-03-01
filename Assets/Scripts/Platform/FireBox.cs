using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireBox : MonoBehaviour
{
    Animator animator;//获取Animator用于动画启动
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void OnCollisionEnter2D(Collision2D other)//碰撞检测,检测的是碰到当前物体的Colider
    {
        if (other.gameObject.CompareTag("Player"))
        {
            animator.Play("FireBoxReady");//给角色一个速度
        }//碰到了角色;也可以用tag==
    }
}
