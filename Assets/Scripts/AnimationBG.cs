using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationBG : MonoBehaviour
{
    private Material material;//�洢�����������е���
    private Vector2 movement;//�ò������ڵ����ٶȣ���speed����һ��ת����ϵ

    public Vector2 speed;//�ڴ�����չ��һ���������Ե���xy����ƶ�ֵ
    void Start()
    {
        /*material = GetComponent<Material>();*///��δ����õ�ǰ������صĲ��ʣ��޸ĺ��ı�����������
        material = GetComponent<Renderer>().material;//����δ�����Renderer��ʹ�õ�material,���ܿ�¡����Ĳ���,ʹ���ʵ���Ĳ���ר���ڵ�ǰ����(���ض�����Ⱦ)
    }

    // Update is called once per frame
    void Update()
    {
        movement += speed * Time.deltaTime;//Time.deltaTime��Time.fixedDeltaTime������Update��FixUpdate������;Update����ȶ���һ��ֵ������FixUpdate�ȶ�Ϊһ��ֵ
        material.mainTextureOffset = movement;//��������ǰ���ʵ�offset
    }
}
