using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    Vector3 movement;//由于platform更多是改变位置,需要直接应用到transform上(它是3D的)
    GameObject topLine;

    public float speed;
    void Start()
    {
        movement.y = speed;//限定platform在y轴上移动
        topLine = GameObject.Find("TopLine");//通过名字找到该物体
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
