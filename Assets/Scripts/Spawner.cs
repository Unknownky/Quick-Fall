using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public List<GameObject> generBox = new List<GameObject>();//������Ʒ�б����������������

    public float spawnTime;//�������ʵ��
    private float countTime;//�������ڼ�¼ʱ��
    Vector3 generpoint;//���ݵ�ǰλ�ý����������λ��


    void Update()
    {
        RandGenerPlatform();
        // #if UNITY_EDITOR
        // if (Input.GetKeyDown(KeyCode.T))
        // {
        //     Time.timeScale = 5f;
        // }
        // #endif
    }

    void RandGenerPlatform()
    {
        countTime += Time.deltaTime;//���м�ʱ
        generpoint = transform.position;
        generpoint.x = Random.Range(-3.0f, 3.0f);//����������ɵ�xλ��(���ҷ���)

        if (countTime > spawnTime)
        {
            CreatePlatform();
            countTime = 0;//�ع�Ϊ0
        }

    }

    void CreatePlatform()
    {
        int index = Random.Range(0, generBox.Count);
        if (GameObject.Find("Spiked Ball(Clone)") || GameObject.Find("Spiked Ball With Orange Variant(Clone)") || GameObject.Find("FireBoxGroup(Clone)"))
        {
            while (generBox[index].name == "Spiked Ball" || generBox[index].name == "Spiked Ball With Orange Variant" || generBox[index].name == "FireBoxGroup")//����и�����Ļ������ֱ������
            {
                index = Random.Range(0, generBox.Count);
            }
        }
        //�����ǰ�Ѿ�����Spiked Ball ���Ҽ������� һ��
        GameObject newItem = Instantiate(generBox[index], generpoint, Quaternion.identity);//Quaternion.identity��Ϊ��Ԫ��(0,0,0,0)
        newItem.transform.SetParent(gameObject.transform);//��������Ʒ��λ������Ϊ��ǰ�ű���������λ�õ��Ӽ�
        //this�ǵ�ǰ�ű�
    }
}
