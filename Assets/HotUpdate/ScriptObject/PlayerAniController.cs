using System.Collections;
using System.Collections.Generic;
using Mono.Cecil.Cil;
using Sirenix.OdinInspector;
using UnityEditor.Animations;
using UnityEngine;

[CreateAssetMenu(menuName = ("Container/newPlayerAniController"), fileName = ("NewPlayerAniController"))]
public class PlayerAniController : ScriptableObject
{
    [BoxGroup("玩家动画名字")]
    public string playerAniName;
    [BoxGroup("玩家动画控制器变体")]
    public bool variablePlayerAniController;

    [BoxGroup("玩家动画控制器"), SerializeField, HideIf("variablePlayerAniController")]
    public AnimatorController playerAnimatorController;

    [BoxGroup("玩家动画控制器"), SerializeField, ShowIf("variablePlayerAniController")]
    public AnimatorOverrideController playerAnimatorOverrideController;

    [BoxGroup("玩家动画描述"), Multiline(5)]
    public string playerAniDescription;
}
