using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Sirenix.OdinInspector;

public class BreathMechNormalize : MonoBehaviour
{
	[SerializeField]
	[SceneObjectsOnly]
	[ValidateInput("@analyzer", "Component must have an analyzer assigned!")]
	private AudioAnalyzer analyzer;

	[SerializeField]
	private List<NormalizedEvent> VolumeEvents;
	[SerializeField]
	private List<NormalizedEvent> PitchEvents;

	[System.Serializable]
	public struct NormalizedEvent
	{
		public UnityEvent<float> action;
		public Vector2 normalizedRange;
		public Vector2 valueRange;

		public float NormalizeValue(float value)
		{
			return Mathf.Lerp(normalizedRange.x, normalizedRange.y,
				Mathf.InverseLerp(valueRange.x, valueRange.y, value));
		}
	}

	private void OnEnable()
	{
		analyzer.OnAvgVolumeChange.AddListener(VolumeUpdated);
		analyzer.OnAvgVolumeChange.AddListener(PitchUpdated);

		VolumeUpdated(analyzer.AvgVolume);
		PitchUpdated(analyzer.AvgPitch);
	}

	private void OnDisable()
	{
		analyzer.OnAvgVolumeChange.RemoveListener(VolumeUpdated);
		analyzer.OnAvgVolumeChange.RemoveListener(PitchUpdated);
	}

	public void VolumeUpdated(float value)
	{
		foreach(NormalizedEvent e in VolumeEvents)
		{
			e.action.Invoke(e.NormalizeValue(value));
		}
	}

	public void PitchUpdated(float value)
	{
		foreach (NormalizedEvent e in PitchEvents)
		{
			e.action.Invoke(e.NormalizeValue(value));
		}
	}

	private void OnValidate()
	{
		if (analyzer == null) analyzer = GetComponent<AudioAnalyzer>();
	}
}
