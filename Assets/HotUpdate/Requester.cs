using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

/// <summary>
/// 请求者，利用反射机制来对一些管理类进行请求,Manager of Managers
/// </summary>
public class Requester : MonoBehaviour
{
    [TabGroup("SystemProperties"), ShowInInspector, OnValueChanged("TestSceneMusic"), InfoBox("当前场景名")]
    public string currentSceneName { get; private set; } //节约性能让其他热更新脚本直接获取

    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly, InfoBox("场景对应的音乐名")]
    private string sceneSwitchMusicName;
    [TabGroup("SystemProperties"), ShowInInspector, ReadOnly, InfoBox("系统程序集信息")]
    private Assembly systemAssembly; //反射程序集信息只在Requester中使用，其他类不使用，便于管理
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly, InfoBox("Requester单例")]
    public static Requester instance;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private Type sceneLoaderType;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private Type audioManagerType;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private Type gameManagerType;

    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private MethodInfo playSoundEffectMethod;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private MethodInfo addressablesLoadSceneSingleMethod;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    private MethodInfo gameOverMethod;
    [TabGroup("RequesterProperties"), ShowInInspector, ReadOnly]
    public Action OnGameOverForRequester; //游戏结束的委托,由GameManager的GameOver方法调用，由Requester注册方法

    [BoxGroup("背包"), ReadOnly]
    private string currentPlayerAniControllerName => ContainerManager.instance.currentPlayerAniControllerName;

    [BoxGroup("背包"), ReadOnly]
    private string currentBackgroundName => ContainerManager.instance.currentBackgroundName;

    [BoxGroup("背包 "), ShowInInspector, Required, InfoBox("可寻址的动画控制器总文件夹")]
    private string addressableAnimatorControllerFolderName = "Player"; // 可寻址的动画控制器总文件夹

    [BoxGroup("背包 "), ShowInInspector, Required, InfoBox("可寻址的背景总文件夹")]
    private string addressableBackgroundFolderName = "Background"; // 可寻址的背景材质总文件夹

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
        systemAssembly = Assembly.Load("Assembly-CSharp");  //通过反射从先前已经加载了的Assembly-CSharp程序集中获取SceneLoader和AudioManager的Type
        RegisterEssentialType();    //注册必要的类型
        //通过反射获取常用的方法
        RegisterMethodInfo();

        //通过反射获取SceneLoader的静态委托字段并添加一个方法
        var onSceneLoadComplete = sceneLoaderType.GetField("OnSceneLoadComplete");
        Debug.Log(onSceneLoadComplete);
        onSceneLoadComplete.SetValue(null, (Action)OnSceneLoadComplete_Listener);

        //注册游戏结束的委托
        OnGameOverForRequester += StoreFruitsInfo;
    }

    private void StoreFruitsInfo()
    {
        //当前果实情况,在游戏结束时获取GameManager的fruits信息并更新
        //通过反射获取GameManager的instance字段的fruits，然后将对应的值加入到fruitsTotal中
        var instanceField = gameManagerType.GetField("instance");
        var instance = instanceField.GetValue(null);
        var fruits = (Dictionary<string, int>)instanceField.FieldType.GetField("fruits").GetValue(instance);    //获取GameManager的fruits
        foreach (var fruit in fruits)
        {
            //TODO:通过ContainerManager的方法更新果实信息
            ContainerManager.instance.UpdateFruitsPossesion(fruit.Key, fruit.Value);
        }
    }

    private void RegisterEssentialType()
    {
        //通过反射从先前已经加载了的Assembly-CSharp程序集中获取SceneLoader和AudioManager的Type
        sceneLoaderType = systemAssembly.GetType("SceneLoader");//Assembly.Load 方法会检查程序集是否已经加载。如果已经加载，它会返回已加载的程序集的引用，而不是再次加载它。
        audioManagerType = systemAssembly.GetType("AudioManager");
        gameManagerType = systemAssembly.GetType("GameManager");
    }

    private void RegisterMethodInfo()
    {
        playSoundEffectMethod = audioManagerType.GetMethod("PlaySoundEffect");
        addressablesLoadSceneSingleMethod = sceneLoaderType.GetMethod("AddressablesLoadSceneSingle");
        gameOverMethod = gameManagerType.GetMethod("GameOver");
    }


    ~Requester()
    {
        //通过反射获取SceneLoader的OnSceneLoadComplete委托字段并移除一个方法
        var onSceneLoadComplete = sceneLoaderType.GetField("OnSceneLoadComplete");
        onSceneLoadComplete.SetValue(null, null);
        OnGameOverForRequester -= StoreFruitsInfo; //移除游戏结束的委托
    }

    private void OnSceneLoadComplete_Listener()
    {
        //通过反射获取SceneLoader的currentSceneName字段
        var currentSceneNameField = sceneLoaderType.GetField("currentSceneName");
        currentSceneName = (string)currentSceneNameField.GetValue(null);
        //通过反射获取AudioManager的PlayMusic方法
        SceneMusicSwitcher();
        var playMusicMethod = audioManagerType.GetMethod("PlayMusic");
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName, true, 1 });
    }


    /// <summary>
    /// 根据currentSceneName匹配音乐名
    /// </summary>
    private void SceneMusicSwitcher()
    {
        switch (currentSceneName)
        {
            case "MainMenu":
                sceneSwitchMusicName = "MenuMusic";
                break;
            case "SampleScene":
                sceneSwitchMusicName = "PlayMusic";
                break;
            case "TeachMenu":
                sceneSwitchMusicName = "MenuMusic";
                break;
            default:
                sceneSwitchMusicName = "MenuMusic";
                break;
        }
    }

    #region 公共方法
    /// <summary>
    /// 单独加载场景，截取自SceneLoader
    /// </summary>
    /// <param name="addressableSceneName">场景名</param>
    public void AddressablesLoadSceneSingle(string addressableSceneName)
    {
        Time.timeScale = 1.0f;
        //通过反射获取SceneLoader的instance调用AddressablesLoadSceneSingle方法
        var instanceField = instance.sceneLoaderType.GetField("instance");
        var instanceScene = instanceField.GetValue(null);
        instance.addressablesLoadSceneSingleMethod.Invoke(instanceScene, new object[] { addressableSceneName });
    }

    /// <summary>
    /// 播放音效，截取自AudioManager
    /// </summary>
    /// <param name="soundName">音效名</param>
    public void PlaySoundEffect(string soundName, float volume = 1f)
    {
        //通过反射获取AudioManager的PlaySoundEffect方法
        playSoundEffectMethod.Invoke(null, new object[] { soundName, 1f });
    }

    /// <summary>
    /// 游戏结束，截取自GameManager
    /// </summary>
    /// <param name="dead">角色是否死亡</param>
    public void GameOver(bool dead)
    {
        gameOverMethod.Invoke(null, new object[] { dead });
    }


    /// <summary>
    /// 请求动画控制器
    /// </summary>
    /// <returns>角色控制器句柄</returns>
    public AsyncOperationHandle RequestAniController()
    {
        string path;
        if (currentPlayerAniControllerName == "FogPlayer")
            path = addressableAnimatorControllerFolderName + "/" + currentPlayerAniControllerName + "/" + currentPlayerAniControllerName + ".controller";
        else
            path = addressableAnimatorControllerFolderName + "/" + currentPlayerAniControllerName + "/" + currentPlayerAniControllerName + ".overrideController";
        Debug.Log(path);
        return Addressables.LoadAssetAsync<RuntimeAnimatorController>(path);
    }

    /// <summary>
    /// 请求背景材质
    /// </summary>
    /// <returns>背景材质句柄</returns>
    public AsyncOperationHandle RequestBackground()
    {
        string path = addressableBackgroundFolderName + "/" + currentBackgroundName + ".mat";
        Debug.Log(path);
        return Addressables.LoadAssetAsync<Material>(path);
    }


    public static void UpdateSoundEffectVolume(float value)
    {
        PlayerPrefs.SetFloat("SoundEffectVolume", value);
    }

    public static void UpdateMusicVolume(float volume)
    {
        PlayerPrefs.SetFloat("MusicVolume", volume);
    }

    public static void UpdateTotalVolume(float volume)
    {
        PlayerPrefs.SetFloat("TotalVolume", volume);
    }

    /// <summary>
    /// 为展示装备玩家
    /// </summary>
    public void EquipPlayerForShow()
    {
        PlayerAniEquip.instance.EquipAniController();
        BackgroundEquip.instance.EquipBackgroundMaterial();
    }

    /// <summary>
    /// 判断物体是否在背包中 
    /// </summary>
    /// <param name="scriptableObject">物体</param>
    /// <returns></returns>
    public bool IsLatticeOnBag(ScriptableObject scriptableObject)
    {
        if (scriptableObject is Background)
        {
            return ContainerManager.instance.playerContainer.backgroundsPossesion.Contains(scriptableObject as Background);
        }
        else if (scriptableObject is PlayerAniController)
        {
            return ContainerManager.instance.playerContainer.playerAniControllersPossesion.Contains(scriptableObject as PlayerAniController);
        }
        return false;
    }

    public void Shop(ScriptableObject lattice)
    {
        if (lattice is Background)
        {
            Background background = lattice as Background;
            var dict = ContainerManager.instance.GetCurrentFruitsPossesion();
            if (dict.ContainsKey(background.fruitType) && dict[background.fruitType] >= background.backgroundPrice)
            {
                ContainerManager.instance.UpdateFruitsPossesion(background.fruitType, -background.backgroundPrice);
                CoinEquip.instance.UpdateCoinPossesion();
                if(ContainerManager.instance.playerContainer.backgroundsPossesion.Contains(background) == false)
                    ContainerManager.instance.playerContainer.backgroundsPossesion.Add(background);
            }
        }
        else if (lattice is PlayerAniController)
        {
            PlayerAniController playerAniController = lattice as PlayerAniController;
            var dict = ContainerManager.instance.GetCurrentFruitsPossesion();
            if (dict.ContainsKey(playerAniController.fruitType) && dict[playerAniController.fruitType] >= playerAniController.playerAniControllerPrice)
            {
                ContainerManager.instance.UpdateFruitsPossesion(playerAniController.fruitType, -playerAniController.playerAniControllerPrice);
                CoinEquip.instance.UpdateCoinPossesion();
                if(ContainerManager.instance.playerContainer.playerAniControllersPossesion.Contains(playerAniController) == false)
                    ContainerManager.instance.playerContainer.playerAniControllersPossesion.Add(playerAniController);
            }
        }
    }

    #endregion


    private void TestSceneMusic()
    {
        SceneMusicSwitcher();
        var playMusicMethod = audioManagerType.GetMethod("PlayMusic");
        playMusicMethod.Invoke(null, new object[] { sceneSwitchMusicName, true, 1 });
    }
}
