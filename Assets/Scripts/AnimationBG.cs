using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationBG : MonoBehaviour
{
    private Material material;//存储材质球来进行调整
    private Vector2 movement;//该参数用于调整速度；与speed间有一个转换关系

    public Vector2 speed;//在窗口中展现一个参数可以调整xy轴的移动值
    void Start()
    {
        /*material = GetComponent<Material>();*///这段代码获得当前物体挂载的材质，修改后会改变材质球的设置
        material = GetComponent<Renderer>().material;//而这段代码获得Renderer中使用的material,他能科隆共享的材质,使这个实例的材质专享于当前物体(即特定的渲染)
    }

    // Update is called once per frame
    void Update()
    {
        movement += speed * Time.deltaTime;//Time.deltaTime与Time.fixedDeltaTime类似于Update与FixUpdate的区别;Update间隔稳定于一个值附近，FixUpdate稳定为一个值
        material.mainTextureOffset = movement;//来调整当前材质的offset
    }
}
