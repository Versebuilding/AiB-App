using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

[RequireComponent(typeof(AudioSource))]
[DisallowMultipleComponent]
public class AudioCapture : MonoBehaviour
{
	public static AudioCapture Instance { get; private set; }

	public bool CaptureOnEnable = true;
	public bool AutoDeviceChange = true;

	// Attached Components::
	private AudioSource _audioSource;
	// ---------------------

	private void Awake()
	{
		_audioSource = GetComponent<AudioSource>();

		Debug.Assert(_audioSource != null, this);
	}

	private void OnEnable()
	{
		Debug.Assert(Instance == null, "Only one Audio Capture should ever be active at one time!", this);
		Instance = this;

		if (AutoDeviceChange)
			MicrophoneSettings.OnDeviceNameChanged += UpdateCaptureDevice;

		if (CaptureOnEnable)
		{
			UpdateCaptureDevice(MicrophoneSettings.ActiveDeviceName);
		}
	}

	private void OnDisable()
	{
		Instance = null;

		if (AutoDeviceChange)
			MicrophoneSettings.OnDeviceNameChanged -= UpdateCaptureDevice;
	}

	private Coroutine _captureInstance;
	public void UpdateCaptureDevice(string device)
	{
		if (_captureInstance != null)
		{
			StopCoroutine(_captureInstance);
		}
		if (device != null) _captureInstance = StartCoroutine(_CaptureCoroutine(device));
	}

	private IEnumerator _CaptureCoroutine(string device)
	{
		Debug.Log("Starting to record from " + device);
		_audioSource.clip = Microphone.Start(
			device,
			true,
			10,
			MicrophoneSettings.FREQUENCY
		);

		if (_audioSource.clip != null)
		{
			_audioSource.loop = true;
			while (!(Microphone.GetPosition(device) > 0))
				yield return null;

			_audioSource.Play();
			Debug.Log(device + " has been loaded!");
		}
		else
		{
			Debug.LogError("Microphone.Start() failed to create an audio clip.");
		}
	}

	private void Reset()
	{
		AudioSource source = GetComponent<AudioSource>();
		source.clip = null; source.playOnAwake = false;
	}


#if UNITY_EDITOR
	private void OnValidate()
	{
		AudioSource source = GetComponent<AudioSource>();
		if (source.clip != null)
		{
			source.clip = null;
			Debug.LogError("Audio Capture uses attached audio source clip for handling the microphone input.");
		}

		if (source.playOnAwake)
		{
			source.playOnAwake = false;
			Debug.LogError("Audio Capture uses attached audio source for handling the microphone input. Play is determined by thi");
		}
	}
#endif
}