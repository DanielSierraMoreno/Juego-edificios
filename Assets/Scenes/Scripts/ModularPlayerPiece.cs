using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

public class ModularPlayerPiece : MonoBehaviour
{
	public bool choque = false;
	public bool isGrounded;
	public bool isBox = false;
	public bool isModule = false;
	public GameObject colision; // Será activado/desactivado

	// Distancia del Raycast y LayerMasks
	private const float RAY_DISTANCE = 0.6f;
	private const int GROUND_MASK = (1 << 3) | (1 << 6) | (1 << 8); // Capas 3, 6, 8

	// Configuración para el OverlapBox
	private const float OVERLAP_MULTIPLIER = 1.5f;
	private const int MODULE_MASK = ~0; // Asumiendo que ModularPlayerPiece está en la capa Default (0) o lo ajustaremos.

	LevelConditions levelConditions;

	// Almacenamos el tamaño del propio Collider para el OverlapBox
	private Vector3 halfExtents;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{
		levelConditions = FindObjectOfType<LevelConditions>();

		// Obtener el tamaño del collider del objeto una vez al inicio.
		Collider selfCollider = GetComponent<Collider>();
		if (selfCollider is BoxCollider boxCollider)
		{
			// Si es un BoxCollider, usamos su tamaño.
			halfExtents = boxCollider.size * 0.5f * OVERLAP_MULTIPLIER;
		}
		else
		{
			// Si no tiene BoxCollider, usamos un tamaño fijo basado en su escala.
			halfExtents = transform.localScale * 0.5f * OVERLAP_MULTIPLIER;
		}

		// Aseguramos que el objeto de colisión se referencia correctamente
		//if (colision == null)
		//{
		//	Debug.LogWarning("El objeto 'colision' no está asignado en el Inspector.");
		//}
		//else
		//{
		//	colision.SetActive(false); // Empezamos con la colisión desactivada
		//}
	}

	// FixedUpdate es más apropiado para operaciones de física (Raycast, OverlapBox)
	void FixedUpdate()
	{
		Vector3 rayOrigin = transform.position;
		RaycastHit hit;

		// 1. Detección de Suelo (Raycast)
		isGrounded = Physics.Raycast(rayOrigin, Vector3.down, out hit, RAY_DISTANCE, GROUND_MASK);

		// --- Lógica de Detección de Suelo y Módulos ---
		if (isGrounded)
		{
			ModularPlayerPiece hitPiece = hit.collider.GetComponentInParent<ModularPlayerPiece>();

			// Usamos una variable local para evitar múltiples llamadas
			if (hitPiece != null)
			{
				if (PlayerController.Instance.IsModuleIncluded(hitPiece))
				{
					isModule = false;
					isGrounded = false;
					return;
				}
				else
				{
					isModule = true;
				}
			}
			else
			{
				isModule = false;
			}

			// Detección de Capa
			int hitLayer = hit.collider.gameObject.layer;
			isBox = (hitLayer == 6);
			// isBox = (hitLayer == 6) ? true : (hitLayer == 3) ? false : isBox; // Forma más limpia
		}
		else
		{
			isModule = false;
			isBox = false;
		}

		// 2. Detección de Módulos Cercanos (OverlapBox)
		//DetectNearbyModules();
	}

	// El Update ahora solo se usa para cosas no relacionadas con la física (si las hubiera).
	void Update()
	{
		// El OverlapBox se ha movido a FixedUpdate.
	}

	void DetectNearbyModules()
	{
		// El OverlapBox comprueba si hay otros colliders dentro de un volumen.
		// Nota: El OverlapBox excluye por defecto el propio objeto que lo ejecuta.
		Collider[] nearbyColliders = Physics.OverlapBox(
			transform.position,
			halfExtents*2, // halfExtents ya incluye la multiplicación por 1.5
			transform.rotation,
			MODULE_MASK,
			QueryTriggerInteraction.Ignore);

		bool moduleFound = false;

		foreach (Collider collider in nearbyColliders)
		{
			// No queremos chocar con nuestro propio collider (aunque OverlapBox suele evitarlo).
			if (collider.gameObject == gameObject) continue;

			// Comprobar si el objeto detectado tiene el script ModularPlayerPiece
			if (collider.GetComponent<ModularPlayerPiece>() != null)
			{
				moduleFound = true;
				break;
			}
		}

		// --- Asignación al GameObject 'colision' ---
		if (colision != null)
		{
			colision.SetActive(moduleFound);
		}
	}

	public void Paint()
	{
		// Esta función se llama externamente, así que mantenemos el Raycast aquí
		// para asegurar que las condiciones sean válidas en el momento del llamado.
		// Sin embargo, si se llama inmediatamente después de FixedUpdate, este Raycast es redundante.

		// Las variables isGrounded, isBox, isModule deberían haber sido actualizadas
		// en FixedUpdate, pero por seguridad, podemos re-ejecutar la detección si es necesario.

		// NOTA: Para simplificar, asumiremos que FixedUpdate ya actualizó las variables booleanas.

		if (!isBox && isGrounded && !isModule)
		{
			// **OPTIMIZACIÓN CRÍTICA**
			// Reemplazamos FindGameObjectsWithTag().OrderBy() por Physics.OverlapSphere().

			// 1. Detectar si hay objetos "Paint" cercanos
			// Se asume que los objetos "Paint" están en una capa específica (ej: 9)
			// Si la capa no existe, usa la capa 0 (Default).
			GameObject nearbyPaint = GameObject.FindGameObjectsWithTag("Paint")
				.Where(t => Vector3.Distance(t.transform.position, this.transform.position) < 0.5f)
				.FirstOrDefault();

			// 2. Ejecutar la acción si NO hay pintura cercana (nearbyPaint.Length == 0)
			if (nearbyPaint == null)
			{
				if (PlayerController.Instance.currentSavedMove.painted == null)
					PlayerController.Instance.currentSavedMove.painted = new List<GameObject>();

				PlayerController.Instance.currentSavedMove.painted.Add(Instantiate(levelConditions.paintInstance, this.transform.position, Quaternion.identity));

				if (ManagerPlayer.Instance != null)
				{
					ManagerPlayer.Instance.currentPaint++;
				}
			}
		}
	}

	// El OnTriggerStay se mantiene sin cambios
	private void OnTriggerStay(Collider other)
	{
		if (other.gameObject.GetComponent<PusheableBox>() != null)
		{
			Vector3 localPosition = other.transform.InverseTransformPoint(this.transform.position);
			Vector3 finalPushDirectionLocal = Vector3.zero;
			float threshold = 0.5f;

			if (Mathf.Abs(localPosition.x) > Mathf.Abs(localPosition.z))
			{
				if (localPosition.x > threshold)
				{
					finalPushDirectionLocal = Vector3.right;
				}
				else if (localPosition.x < -threshold)
				{
					finalPushDirectionLocal = Vector3.left;
				}
			}
			else
			{
				if (localPosition.z > threshold)
				{
					finalPushDirectionLocal = Vector3.forward;
				}
				else if (localPosition.z < -threshold)
				{
					finalPushDirectionLocal = Vector3.back;
				}
			}

			if (finalPushDirectionLocal != Vector3.zero)
			{
				Vector3 finalPushDirectionWorld = other.transform.TransformDirection(finalPushDirectionLocal);
				finalPushDirectionWorld.Normalize();

				if (other.gameObject.GetComponent<PusheableBox>().Push(-finalPushDirectionWorld))
					return;
			}

		}

		if (!other.isTrigger)
		{
			if (other.transform.gameObject.layer != 8)
			{
				choque = true;
				Invoke("ResetCol", 0.1f);
			}
		}

	}

	void ResetCol()
	{
		choque = false;

	}
}