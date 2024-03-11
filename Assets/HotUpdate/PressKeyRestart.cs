using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class PressKeyRestart : MonoBehaviour
{
    private bool canRestart = true;

    private void Update() {
        //任意空格键重启当前场景
        if (Input.GetKeyDown(KeyCode.Space) && canRestart)
        {
            canRestart = false; //防止多次按键
            StartCoroutine(RestartInterval());
            Time.timeScale = 1;
            //直接使用Requester的方法
            Requester.instance.AddressablesLoadSceneSingle(Requester.instance.currentSceneName);
        }
        
    }

    //间隔一段时间后可以再次重启，避免卡住
    IEnumerator RestartInterval()
    {
        yield return new WaitForSeconds(2.5f);
        canRestart = true;
    }

    private void OnEnable() {
        canRestart = true; //防止多次按键
    }
}
