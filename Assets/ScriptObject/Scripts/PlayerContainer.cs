using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

[CreateAssetMenu(menuName = ("Container/newPlayerContainer"), fileName = ("NewPlayerContainer"))]
public class PlayerContainer : ScriptableObject
{
    [BoxGroup("玩家名字")]
    public string playerName;
    [BoxGroup("玩家拥有的背景"), ShowInInspector, InlineEditor(InlineEditorModes.GUIOnly)]
    public List<Background> backgroundsPossesion;
    [BoxGroup("玩家拥有的动画"), ShowInInspector, InlineEditor(InlineEditorModes.GUIOnly)]
    public List<PlayerAniController> playerAniControllersPossesion;
}
