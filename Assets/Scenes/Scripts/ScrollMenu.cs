using UnityEngine;
using UnityEngine.EventSystems; // Necesario para detectar la UI
using System.Collections.Generic; // Necesario para RaycastResult

public class ScrollMenu_ForwardAxisLimits : MonoBehaviour
{
	// --- Configuración en el Inspector ---
	[Header("Parámetros de Movimiento")]
	public float dragSensitivity = 0.5f;
	public float maxVelocity = 20f;
	public float decelerationRate = 8f;

	[Header("Límites de Desplazamiento")]
	public float maxScrollDistance = 10f;

	[Header("Detección de Arrastre")]
	public float minDragThreshold = 5f;

	[Header("Exclusión Selectiva de UI")]
	[Tooltip("El Tag que, si se encuentra en el elemento UI pulsado, BLOQUEARÁ el arrastre.")]
	public string exclusionTag = "IgnorarArrastre";
	[Tooltip("La sensibilidad al toque (PointerEventData) que se usará para detectar la UI.")]
	private PointerEventData pointerEventData;
	private List<RaycastResult> raycastResults = new List<RaycastResult>();

	// --- Variables Privadas de Estado ---
	private float currentVelocity = 0f;
	private Vector3 lastMousePosition;
	private bool isDragging = false;
	private Vector3 startPosition;
	private EventSystem eventSystem;

	// ----------------------------------------------------------------------------------------------------------------------

	void Start()
	{
		startPosition = transform.position;
		// Inicializar el EventSystem y los datos del puntero
		eventSystem = EventSystem.current;
		pointerEventData = new PointerEventData(eventSystem);

		if (eventSystem == null)
		{
			Debug.LogError("No se encontró el EventSystem. Asegúrate de que existe en la escena.");
		}
	}

	void Update()
	{
		if (FindObjectOfType<GameDataManager>() != null)
		{
			// 🛑 BLOQUEO DE ENTRADA: Si el gestor de datos no está listo, sal del Update.
			if (!GameDataManager.IsReady)
			{
				return;
			}
		}
		HandleInput();
		ApplyMovement();
		ApplyDeceleration();
	}

	// ----------------------------------------------------------------------------------------------------------------------

	// Nuevo método para verificar si se pulsó un elemento con el tag de exclusión
	bool IsOverExclusionTag()
	{
		// Limpiar resultados anteriores
		raycastResults.Clear();

		// 1. Establecer la posición del raycast al puntero actual
		pointerEventData.position = Input.mousePosition;

		// 2. Ejecutar el raycast en el EventSystem
		// Esto lanzará rayos a todos los GraphicRaycasters activos y llenará la lista raycastResults
		eventSystem.RaycastAll(pointerEventData, raycastResults);

		// 3. Revisar los resultados
		if (raycastResults.Count > 0)
		{
			// Siempre revisamos el primer elemento (el más cercano/superior)
			GameObject hitObject = raycastResults[0].gameObject;

			// 4. Comprobar si el objeto pulsado tiene el tag de exclusión
			if (hitObject.CompareTag(exclusionTag))
			{
				return true; // Tocado un elemento que DEBEMOS IGNORAR
			}
			// Si quieres que afecte a los padres también (ej. Button en un Panel)
			// if (hitObject.GetComponentInParent<Canvas>() != null && hitObject.GetComponentInParent<Canvas>().gameObject.CompareTag(exclusionTag))
			// {
			//     return true;
			// }
		}

		return false; // No se pulsó UI o la UI pulsada no tiene el tag de exclusión
	}

	// ----------------------------------------------------------------------------------------------------------------------

	void HandleInput()
	{
		if (Input.GetMouseButtonDown(0))
		{
			// VERIFICACIÓN CLAVE: Si se pulsó un elemento con el Tag de exclusión, retornamos.
			if (IsOverExclusionTag())
			{
				isDragging = false;
				return;
			}

			// Si el elemento pulsado NO tiene el tag, comenzamos el arrastre
			lastMousePosition = Input.mousePosition;
			isDragging = true;
		}
		else if (Input.GetMouseButton(0) && isDragging)
		{
			// El resto de la lógica de arrastre se mantiene igual
			Vector3 currentMousePosition = Input.mousePosition;
			float deltaY = currentMousePosition.y - lastMousePosition.y;

			if (Mathf.Abs(deltaY) > minDragThreshold)
			{
				float calculatedVelocity = deltaY * dragSensitivity;
				currentVelocity = Mathf.Clamp(calculatedVelocity, -maxVelocity, maxVelocity);
			}
			else
			{
				currentVelocity = 0f;
			}

			lastMousePosition = currentMousePosition;
		}
		else if (Input.GetMouseButtonUp(0))
		{
			isDragging = false;
		}
	}

	// ----------------------------------------------------------------------------------------------------------------------

	void ApplyMovement()
	{
		Vector3 movementVector = transform.forward * currentVelocity * Time.deltaTime;
		Vector3 potentialPosition = transform.position + movementVector;

		float currentDistance = Vector3.Dot(potentialPosition - startPosition, transform.forward);

		// Comprobación MÍNIMA (Distancia < 0)
		if (currentDistance < 0)
		{
			currentVelocity = 0f;
			potentialPosition = startPosition;
		}
		// Comprobación MÁXIMA (Distancia > maxScrollDistance)
		else if (currentDistance > maxScrollDistance)
		{
			currentVelocity = 0f;
			potentialPosition = startPosition + (transform.forward * maxScrollDistance);
		}

		transform.position = potentialPosition;
	}

	void ApplyDeceleration()
	{
		if (!isDragging)
		{
			currentVelocity = Mathf.MoveTowards(
				currentVelocity,
				0f,
				decelerationRate * Time.deltaTime
			);

			float actualDistance = Vector3.Dot(transform.position - startPosition, transform.forward);
			const float Margin = 0.001f;

			if ((actualDistance <= Margin && currentVelocity < 0) ||
				(actualDistance >= maxScrollDistance - Margin && currentVelocity > 0))
			{
				currentVelocity = 0f;
			}
		}
	}
}