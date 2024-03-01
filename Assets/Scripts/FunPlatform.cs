using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FunPlatform : MonoBehaviour
{
    //在当前脚本对fan风扇进行控制(碰撞检测,动画启动)
    public float flyHeight;
    Animator animator;//获取Animator用于动画启动
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void OnCollisionEnter2D(Collision2D other)//碰撞检测,检测的是碰到当前物体的Colider
    {
        if (other.gameObject.CompareTag("Player"))
        {
            animator.Play("Fun_run");//给角色一个速度
            other.rigidbody.velocity = new Vector2(other.rigidbody.velocity.x, flyHeight);
        }//碰到了角色;也可以用tag==
    }

}
