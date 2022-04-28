using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(TMP_Dropdown))]
public class MicrophoneSelectUI : MonoBehaviour
{
	private TMP_Dropdown _dropdown;

	private void Awake()
	{
		_dropdown = GetComponent<TMP_Dropdown>();
		Debug.Assert(_dropdown != null);
	}

	private void OnEnable()
	{
		_dropdown.onValueChanged.AddListener(UpdateSelectedMic);
		RefreshList();
	}

	private void OnDisable()
	{
		_dropdown.onValueChanged.RemoveListener(UpdateSelectedMic);
	}

	public void RefreshList()
	{
		string[] s = Microphone.devices;
		_dropdown.options = new List<TMP_Dropdown.OptionData>();
		_dropdown.options.Add(new TMP_Dropdown.OptionData("None"));

		for (int i = 0; i < s.Length; i++)
		{
			Debug.Log(s[i]);
			_dropdown.options.Add(new TMP_Dropdown.OptionData(s[i]));
		}
	}

	private void UpdateSelectedMic(int option)
	{
		MicrophoneSettings.ActiveDeviceIndex = option - 1;
	}

	public void QuitApp()
	{
		Application.Quit();
	}
}
