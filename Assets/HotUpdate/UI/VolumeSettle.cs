using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 该脚本用于设置Slider的volume
/// </summary>
public class VolumeSettle : MonoBehaviour
{
    public string volumeName;

    private void Start() {
        InitVolume();
    }

    public void InitVolume()
    {
        GetComponent<UnityEngine.UI.Slider>().value = PlayerPrefs.GetFloat(volumeName, 1);
    }
}
