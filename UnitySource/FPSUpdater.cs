using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FPSUpdater : MonoBehaviour
{
	public UnityEvent<float> OnFPSUpdate;

	[SuffixLabel("sec")]
	public float PollingTime = 1f;

	private float counter;
	private int frameCount;

	// Update is called once per frame
	void Update()
	{
		counter += Time.deltaTime;
		frameCount++;

		if (counter >= PollingTime)
		{
			OnFPSUpdate.Invoke(Mathf.Round(frameCount/counter));

			counter -= PollingTime;
			frameCount = 0;
		}
	}
}
