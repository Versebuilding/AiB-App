using UnityEngine;
using System.Linq;
using System;

public static class MicrophoneSettings
{
	public const int FREQUENCY = 44100;

	[NonSerialized] public static Action<string> OnDeviceNameChanged;
	[NonSerialized] private static string m_deviceName = null;

	public static string ActiveDeviceName
	{
		get
		{
			if (!Microphone.devices.Contains(m_deviceName))
			{
				return null;
			}
			return m_deviceName;
		}
		set
		{
			if (value != null)
			{
				if (!Microphone.devices.Contains(value))
				{
					Debug.LogWarning("Microphone Settings trying to set active device name, but the name '" + value + "' is not equal to a device!");
					value = null;
				}
			}

			if (value != m_deviceName)
			{
				if (m_deviceName != null) Microphone.End(m_deviceName);
				OnDeviceNameChanged(value);
			}

			m_deviceName = value;
		}
	}

	public static int ActiveDeviceIndex
	{
		get
		{
			if (m_deviceName == null) return -1;

			string[] devices = Microphone.devices;
			for (int i = 0; i < devices.Length; i++)
				if (devices[i] == m_deviceName)
					return i;
			return -1;
		}

		set
		{
			if (value < Microphone.devices.Length && value >= 0)
				ActiveDeviceName = Microphone.devices[value];
			else
				ActiveDeviceName = null;
		}
	}
}