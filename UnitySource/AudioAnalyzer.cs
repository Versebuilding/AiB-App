using UnityEngine;
using UnityEngine.Audio;
using Sirenix.OdinInspector;
using UnityEngine.Events;

[RequireComponent(typeof(AudioSource))]
public class AudioAnalyzer : MonoBehaviour
{
	private const float REFVALUE = 0.1f;    // RMS value for 0 dB.
	private const float FREQUENCE_MIN = 20;
	private const float FREQUENCE_MAX = 24000;

	public enum BreathBins { None, Low, Medium, High }

	[Title("Private Constants", "Dynamic values that are constant at runtime.")]

	[Tooltip("Number of bin extracted from the audio.")]
	[SerializeField, SuffixLabel("bins")]
	private int SampleCount = 1024;

	[Tooltip("The minimum amplitude to analyze pitch (values below are rounded to 0).")]
	[SerializeField, SuffixLabel("Hz")]
	private float PitchThreshold = 0.02f;

	[Tooltip("Used for lowpass (smooth state changes). Larger alpha is faster, most abrupt changes.")]
	[SerializeField, Range(0.0f, 1.0f), SuffixLabel("%")]
	private float LowpassAlpha = 0.05f;

	[Tooltip("The lowest volume that will be recorded into the lowpass.")]
	[SerializeField, SuffixLabel("dB")]
	public int VolumeClamp = -80;

	[SuffixLabel("@string.Format(\"{0}Hz -{1}Hz\"," +
		"(int)Mathf.Floor(sampleLimits.x * (FREQUENCE_MAX - FREQUENCE_MIN) / SampleCount) + FREQUENCE_MIN," +
		"(int)Mathf.Floor(sampleLimits.y * (FREQUENCE_MAX - FREQUENCE_MIN) / SampleCount) + FREQUENCE_MIN)")]
	[Tooltip("In bins, the range of samples to analyze. [x, y)")]
	[SerializeField, MinMaxSlider(0, "@SampleCount")]
	private Vector2Int sampleLimits;

	[Title("Events", "Updates")]
	public UnityEvent<float> OnAvgVolumeChange;
	public UnityEvent<float> OnAvgPitchChange;

#if UNITY_EDITOR
	[Title("Debug", "Unity Editor Only")]
	[InfoBox("@UnityEngine.Application.isPlaying ? string.Format(\"pitch: {0}, volume: {1}\", AvgPitch, AvgVolume) : \"Play application to see debug values.\"")]
	[SerializeField]
	private bool UseGizmo;
	[SerializeField]
	private Vector3 GizmoOffset;
#endif

	private float[] samples;           // Samples - globally alloced array, overriden every timestep.
	private float[] spectrum;          // Spectrum - globally alloced array, overriden every timestep.

	// Attached Components::
	private AudioSource _audioSource;
	// ---------------------

	private float m_avgPitch = 0;
	public float AvgPitch
	{
		get { return m_avgPitch; }
		private set
		{
			if (value != m_avgPitch)
			{
				m_avgPitch = value;
				OnAvgPitchChange.Invoke(value);
			}
		}
	}

	private float m_avgVolume = -80;
	public float AvgVolume
	{
		get { return m_avgVolume; }
		private set
		{
			if (value != m_avgVolume)
			{
				m_avgVolume = value;
				OnAvgVolumeChange.Invoke(value);
			}
		}
	}

	private void Awake()
	{
		_audioSource = GetComponent<AudioSource>();
		Debug.Assert(_audioSource != null, this);
	}

	private void Start()
	{
		samples = new float[SampleCount];
		spectrum = new float[SampleCount];

		OnAvgVolumeChange.Invoke(AvgVolume);
		OnAvgPitchChange.Invoke(AvgPitch);
	}

	// Update is called once per frame
	private void Update()
	{
		// If the audio has stopped playing, this will restart the mic play the clip.

		float rmsValue = 0, dbValue = VolumeClamp, pitchValue = AvgPitch;
		if (_audioSource.isPlaying)
			// Gets volume and pitch values
			(rmsValue, dbValue, pitchValue) = SampleAudio();

		Debug.Log("Volume: " + dbValue + ", pitch: " + pitchValue);
		// Runs a series of algorithms to decide whether a blow is occuring.
		DeriveBreath(dbValue, pitchValue);
	}

	/// <summary>
	/// Credits to aldonaletto for the function, <a>http://goo.gl/VGwKt</a>
	/// Analyzes the sound, to get volume and pitch values.
	/// </summary>
	private (float, float, float) SampleAudio()
	{
		// Get all of our samples from the mic.
		_audioSource.GetOutputData(samples, 0);

		// Sums squared samples
		float sum = 0;
		for (int i = sampleLimits.x; i < sampleLimits.y; i++)
		{
			sum += Mathf.Pow(samples[i], 2);
		}

		// RMS is the square root of the average value of the samples.
		float rmsValue = Mathf.Sqrt(sum / (sampleLimits.y - sampleLimits.x));
		float dbValue = 20 * Mathf.Log10(rmsValue / REFVALUE);

		// Clamp it to {clamp} min
		if (dbValue < VolumeClamp)
		{
			dbValue = VolumeClamp;
		}

		// Gets the sound spectrum.
		_audioSource.GetSpectrumData(spectrum, 0, FFTWindow.BlackmanHarris);

#if UNITY_EDITOR
		if (UseGizmo)
		{
			Vector3 gizmoPos = transform.position + GizmoOffset;
			for (int i = sampleLimits.x; i < sampleLimits.y; i++)
				Debug.DrawLine(gizmoPos + Vector3.right * ((float)i) / 100f, gizmoPos + new Vector3(((float)i) / 100f, spectrum[i] * 1000f, 0), Color.black);
		}
#endif

		float maxV = 0;
		int maxN = 0;


		// Find the highest sample.
		for (int i = sampleLimits.x; i < sampleLimits.y; i++)
		{
			if (spectrum[i] > maxV && spectrum[i] > PitchThreshold)
			{
				maxV = spectrum[i];
				maxN = i; // maxN is the index of max
			}
		}

		float pitchValue;
		// Interpolate index using neighbours
		if (maxN >= sampleLimits.x && maxN < sampleLimits.y)
		{
			float dL = spectrum[maxN - 1] / spectrum[maxN];
			float dR = spectrum[maxN + 1] / spectrum[maxN];
			float maxpitch = 0.5f * (dR * dR - dL * dL);
			
			// Convert index to frequency
			pitchValue = maxpitch * 24000 / SampleCount;
		}
		else
			pitchValue = AvgPitch;


		return (rmsValue, dbValue, pitchValue);
	}


	private void DeriveBreath(float dbValue, float pitchValue)
	{
		// Run our low pass filter.
		AvgVolume = LowPassFilter(dbValue, AvgVolume);
		AvgPitch = LowPassFilter(pitchValue, AvgPitch);
	}

	/// Gives a result based on the peak volume of the record
	/// and the previous low pass results.
	private float LowPassFilter(float value, float lowpass)
	{
		return LowpassAlpha * value + (1.0f - LowpassAlpha) * lowpass;
	}

#if UNITY_EDITOR

	private void OnValidate()
	{
		if (sampleLimits.x >= sampleLimits.y)
		{
			if (sampleLimits.y == 0)
				sampleLimits.y = 1;
			else
				sampleLimits.x = sampleLimits.y - 1;
		}
	}
#endif
}
