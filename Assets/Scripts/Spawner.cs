using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public List<GameObject> generBox = new List<GameObject>();//声明物品列表，用于随机生成物体

    public float spawnTime;//声明间隔实践
    private float countTime;//声明用于记录时间
    Vector3 generpoint;//根据当前位置进行生成随机位置


    void Update()
    {
        RandGenerPlatform();
    }

    void RandGenerPlatform()
    {
        countTime += Time.deltaTime;//进行计时
        generpoint = transform.position;
        generpoint.x = Random.Range(-3.0f, 3.0f);//随机生成生成的x位置(左右方向)

        if (countTime > spawnTime)
        {
            CreatePlatform();
            countTime = 0;//回归为0
        }

    }

    void CreatePlatform()
    {
        int index = Random.Range(0, generBox.Count);
        if (GameObject.Find("Spiked Ball(Clone)"))
        {
            while (generBox[index].name == "Spiked Ball")//如果有该物体的话再随机直到不是
            {
                index = Random.Range(0, generBox.Count);
            }
        }
        //如果当前已经有了Spiked Ball 并且即将生成 一个
        GameObject newItem = Instantiate(generBox[index], generpoint, Quaternion.identity);//Quaternion.identity即为四元数(0,0,0,0)
        newItem.transform.SetParent(this.gameObject.transform);//将生成物品的位置设置为当前脚本挂载物体位置的子集
        //this是当前脚本
    }
}
