using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;


[CreateAssetMenu(menuName = ("Container/newShopContainer"), fileName = ("newShopContainer"))]
public class ShopContainer : ScriptableObject
{
    [BoxGroup("玩家名字")]
    public string playerName;
    [TabGroup("背景商品"), ShowInInspector, InlineEditor(InlineEditorModes.GUIOnly)]
    public List<Background> backgroundsForSale;
    [TabGroup("动画商品"), ShowInInspector, InlineEditor(InlineEditorModes.GUIOnly)]
    public List<PlayerAniController> playerAniControllersForSale;
}
