using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

[RequireComponent(typeof(PlayableDirector))]
public class ResumeOrPlayExtend : MonoBehaviour
{
	private PlayableDirector _playableDirector;

	private void Awake()
	{
		_playableDirector = GetComponent<PlayableDirector>();
	}

	public void ResumeOrPlay()
	{
		if (_playableDirector != null)
		{
			if (_playableDirector.time != 0)
				_playableDirector.Resume();
			else
				_playableDirector.Play();
		}
	}
}