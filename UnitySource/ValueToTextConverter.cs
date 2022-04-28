using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(TMP_Text))]
public class ValueToTextConverter : MonoBehaviour
{
	public bool UseBins;
	[HideIf("UseBins")]
	public string Format;

	[ShowIf("UseBins")]
	public float range;
	[ShowIf("UseBins")]
	public string[] bins;

	public void SetTextValue(float value)
	{
		GetComponent<TMP_Text>().text = string.Format(Format, value);
	}

	private void OnValidate()
	{
		SetTextValue(12.3f);
	}
}
