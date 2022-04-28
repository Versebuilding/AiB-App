using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObitController : MonoBehaviour
{
	public Vector3 Origin = new Vector3(0, 5, 0);
	public Vector3 lookPoint = new Vector3(0, 0, 0);
	public float radius = 6f;
	public float angle = 0f;
	public float speed = 45f;

	// Update is called once per frame
	void Update()
	{
		UpdatePosition();
	}

	public void UpdatePosition()
	{
		angle += Input.GetAxis("Horizontal") * speed * Time.deltaTime;

		while (angle < 0) angle += 360f;
		while (angle > 360) angle -= 360f;

		Vector3 targetoffset = Vector3.forward * radius;
		targetoffset = Quaternion.AngleAxis(angle, Vector3.up) * targetoffset;

		transform.position = targetoffset + Origin;

		transform.LookAt(lookPoint);
	}

	private void OnValidate()
	{
		if (!Application.isPlaying)
			UpdatePosition();
	}
}
