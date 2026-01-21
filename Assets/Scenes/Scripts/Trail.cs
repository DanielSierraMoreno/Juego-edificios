using UnityEngine;
using System.Collections;

public class Trail : MonoBehaviour
{
	// Asigna el componente TrailRenderer que ya está en tu escena.
	public TrailRenderer currentTrail;

	[Range(1f, 100f)]
	public float drawDepth = 10f;

	// --- Variables para la detección de movimiento ---
	[Header("Detección de Movimiento")]
	private Vector2 lastCursorPosition = Vector2.zero;
	[Range(0f, 10f)]
	public float minDragThreshold = 1f;

	// Posición fuera de la vista para "ocultar" el rastro sin desactivar el objeto.
	private readonly Vector3 OFF_SCREEN_POSITION = new Vector3(-1000f, -1000f, 0f);

	// Bandera para saber si el rastro está dibujando actualmente
	private bool isDrawing = false;

	void Start()
	{
		if (currentTrail == null)
		{
			Debug.LogError("El Trail Renderer (currentTrail) no está asignado en el Inspector.");
			enabled = false;
			return;
		}

		// El GameObject debe estar activo desde Start, y lo movemos fuera de la pantalla.
		currentTrail.Clear();
		currentTrail.transform.position = OFF_SCREEN_POSITION;
		currentTrail.gameObject.SetActive(true); // Aseguramos que el GameObject siempre esté activo.
	}

	void Update()
	{
		// ... (Bloqueos de entrada y pausa, sin cambios)
		if (FindObjectOfType<GameDataManager>() != null)
		{
			if (!GameDataManager.IsReady) return;
		}
		if (ManagerPlayer.Instance.IsPause()) return;

		if (currentTrail == null) return;

		Vector2 currentCursorPosition = Vector2.zero;
		int inputPhase = -1;

		// --- A/B. Detección de Input (sin cambios) ---
		if (Input.touchCount > 0)
		{
			Touch touch = Input.GetTouch(0);
			currentCursorPosition = touch.position;

			if (touch.phase == TouchPhase.Began) inputPhase = 0;
			else if (touch.phase == TouchPhase.Moved || touch.phase == TouchPhase.Stationary) inputPhase = 1;
			else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled) inputPhase = 2;
		}
		else
		{
			currentCursorPosition = Input.mousePosition;

			if (Input.GetMouseButtonDown(0)) inputPhase = 0;
			else if (Input.GetMouseButton(0)) inputPhase = 1;
			else if (Input.GetMouseButtonUp(0)) inputPhase = 2;
		}

		// --- C. LÓGICA DE CONTROL ---
		if (inputPhase != -1)
		{
			Vector3 screenPosition = new Vector3(currentCursorPosition.x, currentCursorPosition.y, drawDepth);
			Vector3 worldPoint = Camera.main.ScreenToWorldPoint(screenPosition);

			float distance = Vector2.Distance(currentCursorPosition, lastCursorPosition);

			// --- Fase 0: Inicio ---
			if (inputPhase == 0)
			{
				// Solo limpiamos, pero NO movemos a off-screen todavía.
				FinalizarTrail();
				lastCursorPosition = currentCursorPosition;
			}

			// --- Fase 1: Movimiento ---
			else if (inputPhase == 1)
			{
				bool isDraggingFast = distance >= minDragThreshold;

				if (isDraggingFast)
				{
					// **MOVIMIENTO RÁPIDO: DIBUJAR**
					if (!isDrawing)
					{
						// Limpiamos de nuevo por seguridad y marcamos que estamos dibujando
						currentTrail.Clear();
						isDrawing = true;
					}

					// Mover el Trail Renderer a la posición del puntero para generar puntos
					currentTrail.transform.position = worldPoint;
					lastCursorPosition = currentCursorPosition;
				}
				else // Movimiento estático o muy lento
				{
					// **MOVIMIENTO LENTO: OCULTAR DIBUJO**
					if (isDrawing)
					{
						// Llama a finalizar, lo cual mueve el rastro fuera de la vista
						FinalizarTrail();
					}
					// Si ya está fuera de la vista, no hacemos nada.
				}
			}

			// --- Fase 2: Fin de Input ---
			else if (inputPhase == 2)
			{
				// Cuando levanta el dedo/ratón, oculta y limpia el rastro.
				FinalizarTrail();
			}
		}
	}

	/// <summary>
	/// Detiene el rastro moviéndolo fuera de la vista y programa su limpieza.
	/// </summary>
	private void FinalizarTrail()
	{
		if (currentTrail != null && isDrawing)
		{
			// 1. Mueve el Trail Renderer fuera de la vista. Esto detiene inmediatamente
			//    la generación de nuevos puntos de rastro en la zona visible.
			currentTrail.transform.position = OFF_SCREEN_POSITION;

			// 2. Programamos una limpieza de la geometría para después del tiempo de desvanecimiento.
			StartCoroutine(ClearAfterTime(currentTrail.time));

			isDrawing = false;
		}
		lastCursorPosition = Vector2.zero;
	}

	// Corrutina para limpiar el Trail Renderer después de su tiempo de vida
	private IEnumerator ClearAfterTime(float time)
	{
		// Esperamos el tiempo que tarda el rastro en desaparecer.
		yield return new WaitForSeconds(time);

		if (currentTrail != null)
		{
			// Limpiamos la geometría interna.
			currentTrail.Clear();
		}
	}
}