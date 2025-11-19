using UnityEngine;
using System.Linq;

public class BarreraLaser : MonoBehaviour
{
	public GameObject barrera;
	public float raycastMaxDistance = 5f;

	// Lista de colliders que contienen el origen del raycast.
	private Collider[] collidersContainingOrigin;
	private const float OVERLAP_RADIUS = 0.01f; // Radio muy pequeño para detectar contención.

	void Start()
	{
		// Al inicio, detectamos qué colliders envuelven el punto de origen
		// Esto solo funciona si el lanzador no se mueve significativamente.
		// Si el lanzador se mueve, esto debería estar en FixedUpdate/Update.

		// Ejecutamos la detección de solapamiento una vez para obtener los colliders iniciales
		DetectCollidersAtOrigin();
	}

	// Método para detectar colliders que solapan el punto de origen
	void DetectCollidersAtOrigin()
	{
		// Se usa OverlapSphere para ver qué colliders están en la posición de origen.
		// Si el origen está dentro de un collider, el OverlapSphere lo detectará.
		collidersContainingOrigin = Physics.OverlapSphere(
			transform.position,
			OVERLAP_RADIUS,
			~0, // Todas las capas
			QueryTriggerInteraction.Ignore // Solo colliders sólidos
		);
	}

	void FixedUpdate()
	{
		// Si el objeto se está moviendo, deberías mover DetectCollidersAtOrigin() aquí.

		Vector3 forwardDirection = transform.forward;
		float finalDistance;

		// 1. Lanzar RaycastAll para obtener todos los golpes.
		RaycastHit[] hits = Physics.RaycastAll(transform.position, forwardDirection, raycastMaxDistance, ~0, QueryTriggerInteraction.Ignore);

		// 2. Filtrar los resultados para encontrar el golpe válido más cercano.
		if (hits.Length > 0)
		{
			// Filtrar los hits: descartamos cualquier hit que pertenezca a un collider 
			// que fue detectado previamente como contenedor del origen.
			RaycastHit? closestValidHit = hits
				.Where(hit =>
					// Descartar si el collider está en la lista de colliders que contienen el origen.
					!collidersContainingOrigin.Contains(hit.collider))
				.OrderBy(hit => hit.distance)
				.FirstOrDefault();

			if (closestValidHit != null)
			{
				// Caso 1: Se encontró un golpe válido.
				finalDistance = closestValidHit.Value.distance;
			}
			else
			{
				// Caso 2b: Solo se golpearon colliders ignorados.
				finalDistance = raycastMaxDistance;
			}
		}
		else
		{
			// Caso 2a: No se golpeó nada.
			finalDistance = raycastMaxDistance;
		}

		// 3. Ajustar la escala de la barrera
		if (barrera != null)
		{
			Vector3 newScale = barrera.transform.localScale;
			newScale.z = finalDistance;
			barrera.transform.localScale = newScale;
		}
	}
}