using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

[CreateAssetMenu(menuName = ("Container/newBackground"), fileName = ("NewBackground"))]
public class Background : ScriptableObject
{
    [BoxGroup("背景名字")]
    public string backgroundMaterialName;
    [BoxGroup("背景材质")]
    public Material backgroundMaterial;
    [BoxGroup("背景材质图片")]
    public Texture backgroundSprite;
    [BoxGroup("背景花费水果类型")]
    public string fruitType;
    [BoxGroup("背景价格")]
    public int backgroundPrice;
    [BoxGroup("背景描述"), Multiline(5)]
    public string backgroundDescription;
}
