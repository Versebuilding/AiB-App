using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[RequireComponent(typeof(ParticleSystem))]
public class ParticleSystemScalar : MonoBehaviour
{
	public bool ScaleSize = true;
	public bool ScaleLifetime = false;
	public bool ScaleSpeed = false;

	[SerializeField]
	private ParticleSystem[] Targets;
	private MainModuleCopy[] initalStates;

	public void SetTargetScales(float scale)
	{
		if (!enabled)
		{
			if (gameObject.activeInHierarchy) Debug.LogWarning("ParticleSystemScalar is trying to set scales while not enabled! (warning not applied while gameobject disabled)");
			return;
		}

		for (int i = 0; i < Targets.Length; i++)
		{
			ScaleModule(i, scale);
		}
	}

	private void ScaleModule(int systemIndex, float value)
	{
		if (initalStates == null)
		{
			initalStates = new MainModuleCopy[Targets.Length];
			for (int i = 0; i < initalStates.Length; i++)
			{
				initalStates[i] = new MainModuleCopy(Targets[i].main);
			}
		}

		ParticleSystem.MainModule main = Targets[systemIndex].main;
		MainModuleCopy initial = initalStates[systemIndex];

		if (ScaleSize)
		{
			if (main.startSize3D)
			{
				main.startSizeX = ScaleMinMaxCurve(initial.startSizeX, value);
				main.startSizeY = ScaleMinMaxCurve(initial.startSizeY, value);
				main.startSizeZ = ScaleMinMaxCurve(initial.startSizeZ, value);
			}
			else
			{
				main.startSize = ScaleMinMaxCurve(initial.startSize, value);
			}
		}

		if (ScaleSpeed)
		{
			main.startSpeed = ScaleMinMaxCurve(initial.startSpeed, value);
		}

		if (ScaleLifetime)
		{
			main.startLifetime = ScaleMinMaxCurve(initial.startLifetime, value);
		}
	}

	private static ParticleSystem.MinMaxCurve ScaleMinMaxCurve(ParticleSystem.MinMaxCurve initial, float value)
	{
		switch (initial.mode)
		{
			case ParticleSystemCurveMode.Constant:
				return new ParticleSystem.MinMaxCurve(initial.constantMax * value);
			case ParticleSystemCurveMode.Curve:
			case ParticleSystemCurveMode.TwoCurves:
				return new ParticleSystem.MinMaxCurve(value, initial.curve);
			case ParticleSystemCurveMode.TwoConstants:
				return new ParticleSystem.MinMaxCurve(initial.constantMin * value, initial.constantMax * value);
			default:
				Debug.LogError("Scale MinMaxCurve does not have a matching mode!");
				return new ParticleSystem.MinMaxCurve(0);
		}
	}

#if UNITY_EDITOR
	[Button("Add Children Component to targets")]
	private void AddChildrenTargets()
	{
		ParticleSystem[] comps = GetComponentsInChildren<ParticleSystem>();

		foreach (ParticleSystem comp in comps)
			if (!Targets.Contains(comp))
				Targets = Targets.Append(comp).ToArray();
	}
#endif

	public struct MainModuleCopy
	{
		public ParticleSystem.MinMaxCurve startLifetime;
		public ParticleSystem.MinMaxCurve startSpeed;
		public ParticleSystem.MinMaxCurve startSize;
		public ParticleSystem.MinMaxCurve startSizeX;
		public ParticleSystem.MinMaxCurve startSizeY;
		public ParticleSystem.MinMaxCurve startSizeZ;

		public MainModuleCopy(ParticleSystem.MainModule main)
		{
			startLifetime = main.startLifetime;
			startSpeed = main.startSpeed;
			startSize = main.startSize;
			startSizeX = main.startSizeX;
			startSizeY = main.startSizeY;
			startSizeZ = main.startSizeZ;
		}
	}
}
