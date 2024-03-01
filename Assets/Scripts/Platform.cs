using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    Vector3 movement;//����platform�����Ǹı�λ��,��Ҫֱ��Ӧ�õ�transform��(����3D��)
    GameObject topLine;

    public float speed;
    void Start()
    {
        movement.y = speed;//�޶�platform��y�����ƶ�
        topLine = GameObject.Find("TopLine");//ͨ�������ҵ�������
    }

    void Update()
    {
        MovePlatform();
    }

    void MovePlatform()
    {
        transform.position += movement * Time.deltaTime;
        if(transform.position.y >= topLine.transform.position.y )
            Destroy(gameObject);
    }
}
