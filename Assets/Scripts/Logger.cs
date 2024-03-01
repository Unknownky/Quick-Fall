using UnityEngine;


#if UNITY_EDITOR
public class Logger
{
    public static void Log(string message)
    {
        Debug.Log(message);
    }
}
#endif