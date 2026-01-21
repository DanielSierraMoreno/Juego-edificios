using DG.Tweening;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PusheableBox : MonoBehaviour
{
	public bool isGrounded;
	private const float RAY_DISTANCE = 0.5f;
	private const int GROUND_MASK = (1 << 3) | (1 << 6);
	public bool moving = false;
	public float gravityVel = 0;
	public List<PusheableBox> boxes;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{
		boxes = new List<PusheableBox>();
	}

	// Update is called once per frame
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
		Vector3 rayOrigin = transform.position;

		// Ejecutar el Raycast
		// Get the Collider component (assuming a BoxCollider for cuboid shape)
		// You should declare and initialize this once, perhaps in Start() or Awake().
		// For simplicity, I'll assume you have a reference named 'myCollider'.
		// For this example, let's assume we retrieve it now:
		Collider myCollider = this.GetComponent<Collider>();

		// Calculate the half-extents (half size) of the box for the BoxCast
		// This assumes the local scale is (1, 1, 1). If not, you might need to
		// use myCollider.bounds.extents which gives world-space half-extents.
		// Let's use world bounds for robustness:
		Vector3 halfExtents = myCollider.bounds.extents;

		// The origin of the BoxCast is the center of the object
		Vector3 boxOrigin = this.transform.position;
		// The rotation of the box
		Quaternion boxRotation = this.transform.rotation;
		// The direction of the cast (down)
		Vector3 direction = Vector3.down;

		// RAY_DISTANCE is the max distance to check. We need to account for the size 
		// of the box already extending out from the origin.
		// We'll use the original RAY_DISTANCE, as the check will be for the 
		// **movement** distance *after* the box's half-height is factored in by Unity.
		float distance = (RAY_DISTANCE*halfExtents.y)+0.05f;

		// The BoxCast performs the check
		isGrounded = Physics.BoxCast(
			boxOrigin,
			halfExtents * 0.98f,
			direction,
			out RaycastHit hit,
			boxRotation,
			distance,
			GROUND_MASK,
			QueryTriggerInteraction.Ignore // Use this to ignore triggers unless you need them
		);

		if (!isGrounded)
		{
			gravityVel += -15 * Time.deltaTime;

			this.transform.position += new Vector3(0, gravityVel * Time.deltaTime, 0);

		}
		else
		{
			// The grounding adjustment still uses a Raycast in the original code,
			// which might need to be a BoxCast too for consistency, 
			// but I'll update it to use the 'hit' from the BoxCast if it's simpler.
			// However, if the BoxCast hits, we already have 'hit'. Let's reuse 'hit'.

			// We need to ensure 'hit' is valid for the position adjustment. 
			// Since isGrounded is true, 'hit' is valid.

			// Original code used a new Raycast for position adjustment, which is common
			// to find the exact landing point after a larger 'isGrounded' check.
			// I will keep the second check structure for safety, 
			// replacing the raycast with a BoxCast here too for consistency, 
			// but using a very short distance to just "align" with the ground.


			RaycastHit hitInfo;

			// Use a very short distance (e.g., 0.1f) for the BoxCast to find 
			// the exact resting point on the ground.
			float alignmentDistance = 0.10f;

			if (Physics.BoxCast(
				boxOrigin,
				halfExtents*0.98f,
				direction,
				out hitInfo,
				boxRotation,
				alignmentDistance + halfExtents.y, // Add half height to distance for better alignment check
				~3,
				QueryTriggerInteraction.Ignore)
			)
			{
				// Adjust position based on the hit point.y and the half-height of the box.
				// hitInfo.point.y is the surface the box hit. We need to move the 
				// object's center up by half its height to place it *on* that surface.
				this.transform.position = new Vector3(
					this.transform.position.x,
					hitInfo.point.y + (halfExtents.y)+0.01f,
					this.transform.position.z
				);
			}

			gravityVel = 0;
		}

	}
	void Reset()
	{
		moving = false;
	}
	public bool CheckPush(Vector3 direction)
	{
		// Obtener el Collider de la caja para conocer su tamaño
		Collider boxCollider = GetComponent<Collider>();

		// Si no hay Collider o si ya se está moviendo, no se puede empujar.
		if (boxCollider == null || moving)
		{
			return true;
		}

		// --- 1. Preparar el BoxCast ---

		// Calcular el destino (la posición final deseada)
		Vector3 targetPosition = this.transform.position + direction;
		float distance = direction.magnitude * 0.98f;
		Vector3 halfExtents = boxCollider.bounds.extents * 0.98f;
		Vector3 origin = this.transform.position;
		Vector3 normalizedDirection = direction.normalized;
		int layerMask = ~0; // Todos los layers

		RaycastHit[] hits = Physics.BoxCastAll(origin, halfExtents, normalizedDirection,
												   this.transform.rotation, distance,
												   layerMask, QueryTriggerInteraction.Ignore);

		// 3. Procesar los resultados

		// Filtramos para ignorar la colisión de la propia caja con la que estamos trabajando.
		// Además, los ordenamos por distancia para procesar el más lejano (el final de la cadena) primero.
		var relevantHits = hits
			.Where(hit => hit.collider.gameObject != this.gameObject)
			.OrderByDescending(hit => hit.distance)
			.ToList();

		// Bandera para rastrear si algún empuje falló en la cadena.
		bool pushChainSuccessful = true;


		foreach (RaycastHit hit in relevantHits)
		{
			PusheableBox hitBox = hit.collider.gameObject.GetComponent<PusheableBox>();

			// 3a. Colisión con OBSTÁCULO (Algo que NO es PusheableBox)
			if (hitBox == null)
			{
				// [REQUISITO 1]: ¡Colisión detectada con un obstáculo fijo! 
				// Esto anula toda la cadena de empuje inmediatamente.
				// No se necesitan más comprobaciones, ya que este es el punto de falla definitivo.
				// Debug.Log("Falla: Obstáculo fijo detectado en la trayectoria: " + hit.collider.gameObject.name);
				return false;
			}
			else
			{
				// 3b. Colisión con OTRA PusheableBox (Empujable)

				// [REQUISITO 2 y 3]: Intentar empujar la siguiente caja de forma recursiva.
				// Si el Push recursivo devuelve 'false', la cadena falla.
				if (!hitBox.CheckPush(direction))
				{
					// El empuje de una caja subsiguiente falló.
					// Marcamos el fallo y salimos del bucle foreach, ya que no se puede mover nada más.
					pushChainSuccessful = false;
					break;
				}

				boxes.Add(hitBox);
			}
		}

		// 4. Decisión Final de Movimiento

		// [REQUISITO 3 y 4]: Si la bandera es false (alguna caja falló) o se detectó un obstáculo 
		// (el cual ya devolvió false antes del bucle, pero lo comprobamos por seguridad), 
		// devolvemos false. Si llegamos aquí con 'true', la cadena fue exitosa.
		if (!pushChainSuccessful)
		{
			// El empuje de una caja más adelante en la cadena falló.
			return false;
		}

		// --- 4. Si no hay colisión, se realiza el movimiento ---

		return true;
	}
	public void OnlyPush(Vector3 direction)
	{
		bool push = true;
		foreach (PusheableBox box1 in boxes)
		{
			box1.OnlyPush(direction);
			push = false;
		}

		boxes.Clear();
		//if(!push) 
		//{ 
		//	return;
		//}

		Vector3 targetPosition = this.transform.position + direction;

		moving = true;

		if (PlayerController.Instance.currentSavedMove.pusheableBoxes == null)
			PlayerController.Instance.currentSavedMove.pusheableBoxes = new List<PlayerController.PusheableBoxStruct>();

		PlayerController.PusheableBoxStruct box;
		box.currentPos = targetPosition;
		box.movement = this.transform.position;
		box.box = this;

		PlayerController.Instance.currentSavedMove.pusheableBoxes.Add(box);

		// Usamos 'direction' porque DoMove necesita el desplazamiento total.
		this.transform.DOMove(targetPosition, 0.25f);
		Invoke("Reset", 0.25f);
		return;
	}
	public bool Push(Vector3 direction)
	{
		// Obtener el Collider de la caja para conocer su tamaño
		Collider boxCollider = GetComponent<Collider>();

		// Si no hay Collider o si ya se está moviendo, no se puede empujar.
		if (boxCollider == null || moving)
		{
			return true;
		}

		// --- 1. Preparar el BoxCast ---

		// Calcular el destino (la posición final deseada)
		Vector3 targetPosition = this.transform.position + direction;
		float distance = direction.magnitude * 0.95f;
		Vector3 halfExtents = boxCollider.bounds.extents * 0.95f;
		Vector3 origin = this.transform.position;
		Vector3 normalizedDirection = direction.normalized;
		int layerMask = ~((1 << 7) | (1 << 8));

		RaycastHit[] hits = Physics.BoxCastAll(origin, halfExtents, normalizedDirection,
												   this.transform.rotation, distance,
												   layerMask, QueryTriggerInteraction.Ignore);

		// 3. Procesar los resultados

		// Filtramos para ignorar la colisión de la propia caja con la que estamos trabajando.
		// Además, los ordenamos por distancia para procesar el más lejano (el final de la cadena) primero.
		var relevantHits = hits
			.Where(hit => hit.collider.gameObject != this.gameObject)
			.OrderByDescending(hit => hit.distance)
			.ToList();

		// Bandera para rastrear si algún empuje falló en la cadena.
		bool pushChainSuccessful = true;


		foreach (RaycastHit hit in relevantHits)
		{
			PusheableBox hitBox = hit.collider.gameObject.GetComponent<PusheableBox>();

			// 3a. Colisión con OBSTÁCULO (Algo que NO es PusheableBox)
			if (hitBox == null)
			{
				if(hit.transform.gameObject.layer != 8)
				{
					if(hit.transform.gameObject.GetComponentInParent<ModularPlayerPiece>() != null)
					{
						if (!PlayerController.Instance.IsModuleIncluded(hit.transform.gameObject.GetComponentInParent<ModularPlayerPiece>()))
						{
							return false;
						}
					}
					else
						return false;
				}
				// [REQUISITO 1]: ¡Colisión detectada con un obstáculo fijo! 
				// Esto anula toda la cadena de empuje inmediatamente.
				// No se necesitan más comprobaciones, ya que este es el punto de falla definitivo.
				// Debug.Log("Falla: Obstáculo fijo detectado en la trayectoria: " + hit.collider.gameObject.name);
			}
			else
			{
				// 3b. Colisión con OTRA PusheableBox (Empujable)

				// [REQUISITO 2 y 3]: Intentar empujar la siguiente caja de forma recursiva.
				// Si el Push recursivo devuelve 'false', la cadena falla.
				if (!hitBox.CheckPush(direction))
				{
					// El empuje de una caja subsiguiente falló.
					// Marcamos el fallo y salimos del bucle foreach, ya que no se puede mover nada más.
					pushChainSuccessful = false;
					break;
				}

				boxes.Add(hitBox);

			}
		}

		// 4. Decisión Final de Movimiento

		// [REQUISITO 3 y 4]: Si la bandera es false (alguna caja falló) o se detectó un obstáculo 
		// (el cual ya devolvió false antes del bucle, pero lo comprobamos por seguridad), 
		// devolvemos false. Si llegamos aquí con 'true', la cadena fue exitosa.
		if (!pushChainSuccessful)
		{
			// El empuje de una caja más adelante en la cadena falló.
			return false;
		}

		bool push = true;
		foreach (PusheableBox box1 in boxes)
		{
			box1.OnlyPush(direction);
			push = false;
		}

		boxes.Clear();
		//if (!push)
		//{
		//	return false;
		//}
		// --- 4. Si no hay colisión, se realiza el movimiento ---

		moving = true;

		if (PlayerController.Instance.currentSavedMove.pusheableBoxes == null)
			PlayerController.Instance.currentSavedMove.pusheableBoxes = new List<PlayerController.PusheableBoxStruct>();

		PlayerController.PusheableBoxStruct box;
		box.currentPos = targetPosition;
		box.movement = this.transform.position;
		box.box = this;

		PlayerController.Instance.currentSavedMove.pusheableBoxes.Add(box);


		RaycastHit hit2;

		// 3. Lanzar el Raycast
		// Physics.Raycast(origen, dirección, out hit, distancia_maxima)
		if (Physics.Raycast(this.transform.position, Vector3.up, out hit2, 1))
		{
			if(hit2.transform.GetComponent<PusheableBox>() != null)
			{
				hit2.transform.GetComponent<PusheableBox>().Push(direction);
			}


		}
		// Usamos 'direction' porque DoMove necesita el desplazamiento total.
		this.transform.DOMove(targetPosition, 0.25f);
		Invoke("Reset", 0.25f);

		return true;
	}
}
