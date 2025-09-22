using UnityEngine;

public class CameraDragDontrol : MonoBehaviour
{
	public float moveSpeed = 0.01f; // Sensibilidad del movimiento

	private Vector3 lastMousePosition;

	void Update()
	{
		// ?? --- CONTROL EN MOVIL ---
		if (Input.touchCount > 0)
		{
			Touch touch = Input.GetTouch(0);

			if (touch.phase == TouchPhase.Moved)
			{
				Vector2 delta = touch.deltaPosition;
				transform.position += new Vector3(-delta.x * moveSpeed, 0, -delta.y * moveSpeed);
			}
		}

		// ??? --- CONTROL EN PC (RATON) ---
		else if (Input.GetMouseButton(0)) // Botón izquierdo presionado
		{
			if (Input.GetMouseButtonDown(0))
			{
				lastMousePosition = Input.mousePosition;
			}

			Vector3 delta = Input.mousePosition - lastMousePosition;
			lastMousePosition = Input.mousePosition;

			transform.position += new Vector3(-delta.x * moveSpeed, 0, -delta.y * moveSpeed);
		}
	}
}
