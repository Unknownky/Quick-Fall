using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FunPlatform : MonoBehaviour
{
    //�ڵ�ǰ�ű���fan���Ƚ��п���(��ײ���,��������)
    public float flyHeight;
    Animator animator;//��ȡAnimator���ڶ�������
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void OnCollisionEnter2D(Collision2D other)//��ײ���,������������ǰ�����Colider
    {
        if (other.gameObject.CompareTag("Player"))
        {
            animator.Play("Fun_run");//����ɫһ���ٶ�
            other.rigidbody.velocity = new Vector2(other.rigidbody.velocity.x, flyHeight);
        }//�����˽�ɫ;Ҳ������tag==
    }

}
