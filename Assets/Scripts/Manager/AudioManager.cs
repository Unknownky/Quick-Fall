using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class AudioManager : MonoBehaviour
{
    [BoxGroup("组件"), Required, SceneObjectsOnly, InfoBox("音乐播放组件")]
    public AudioSource musicAudioSource;
    [BoxGroup("组件"), Required, SceneObjectsOnly, InfoBox("音效播放组件")]
    public AudioSource soundEffectAudioSource;

    [TabGroup("寻址音效"), Required]
    public List<AssetReference> addressableAudioClips;

    [TabGroup("音效"), ShowInInspector, ValueDropdown("musicList"), InlineButton("PlayMusicTest", "播放音效")]
    private AudioClip currentAudioClip;

    [TabGroup("音效"), ShowInInspector, InlineEditor(InlineEditorModes.SmallPreview)]
    private List<AudioClip> musicList;

    public static AudioManager instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    private void Start()
    {
        //如果musicList为空的化将音效加载后根据名字放入musicList中
        if (musicList == null || musicList.Count == 0)
        {
            musicList = new List<AudioClip>();
            foreach (var addressableAudioClip in addressableAudioClips)
            {
                addressableAudioClip.LoadAssetAsync<AudioClip>().Completed += OnLoadAudioClipComplete;
            }
        }
    }

    private void OnLoadAudioClipComplete(AsyncOperationHandle<AudioClip> obj)
    {
        if (obj.Status == AsyncOperationStatus.Succeeded)
        {
            musicList.Add(obj.Result);
        }
    }

    #region 提供给外部调用的方法
    /// <summary>
    /// 播放音效,传入音效名字,音量大小;使用musicList中的音效
    /// </summary>
    /// <param name="soundName"></param>
    /// <param name="volume"></param>
    public void PlaySoundEffect(string soundName, float volume = 1)
    {
        if (musicList != null && musicList.Count > 0)
        {
            AudioClip clip = musicList.Find(music => music.name == soundName);
            if (clip != null)
            {
                soundEffectAudioSource.clip = clip;
                soundEffectAudioSource.volume = volume;
                soundEffectAudioSource.Stop();
                soundEffectAudioSource.Play();
            }
        }
    }

    /// <summary>
    /// 播放音乐,传入音乐名字,是否循环播放，音量大小;使用musicList中的音乐
    /// </summary>
    /// <param name="musicName">音乐名字</param>
    /// <param name="loop">是否循环播放</param>
    /// <param name="volume">音量大小</param>
    public void PlayMusic(string musicName, bool loop = true, float volume = 1)
    {
        if (musicList != null && musicList.Count > 0)
        {
            AudioClip clip = musicList.Find(music => music.name == musicName);
            if (clip != null)
            {
                musicAudioSource.clip = clip;
                musicAudioSource.loop = loop;
                musicAudioSource.volume = volume;
                musicAudioSource.Stop();
                musicAudioSource.Play();
            }
        }
    }

    #endregion
    //音效测试
    public void PlayMusicTest(AudioClip clip)
    {
        if (soundEffectAudioSource != null && clip != null)
        {
            soundEffectAudioSource.clip = clip;
            soundEffectAudioSource.Stop();
            soundEffectAudioSource.Play();
        }
    }
}
