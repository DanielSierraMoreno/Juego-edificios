using DG.Tweening;
using UnityEngine;

public class PusheableBox : MonoBehaviour
{
	public bool isGrounded;
	private const float RAY_DISTANCE = 0.5f;
	private const int GROUND_MASK = (1 << 3) | (1 << 6);
	public bool moving = false;
	public float gravityVel = 0;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{
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

		// La distancia a verificar es la magnitud del vector de dirección. 
		// Como ya normalizaste 'direction' a magnitud 1.0, esta es la distancia.
		float distance = direction.magnitude*0.98f;

		// Puesto que 'direction' ya está normalizado a 1, la distancia es 1 unidad.

		// Los 'halfExtents' del BoxCast (mitad del tamaño de la caja)
		Vector3 halfExtents = boxCollider.bounds.extents * 0.98f;

		// El origen de la verificación es la posición actual
		Vector3 origin = this.transform.position;

		// La dirección del BoxCast
		// Unity's BoxCast requires the direction to be normalized separately,
		// although 'direction' should already be normalized from the caller.
		Vector3 normalizedDirection = direction.normalized;

		// --- 2. Verificar Colisión con BoxCast ---

		RaycastHit hit;
		// LayerMask opcionalmente para ignorar triggers o la propia caja
		// Aquí usamos un LayerMask de '-1' (todos) o puedes definir una para los obstáculos.
		int layerMask = ~0;

		// BoxCast comprueba si la caja, al ser 'barrida' una unidad de distancia, choca con algo.
		if (Physics.BoxCast(origin, halfExtents, normalizedDirection, out hit, this.transform.rotation, distance, layerMask, QueryTriggerInteraction.Ignore))
		{
			// 3. ¡Colisión detectada! No se mueve la caja.
			// Opcional: Puedes verificar si el objeto golpeado es un PusheableBox o un obstáculo.

			// Debug.Log("Colisión detectada con: " + hit.collider.gameObject.name);
			return false;
		}

		// --- 4. Si no hay colisión, se realiza el movimiento ---

		moving = true;

		// Usamos 'direction' porque DoMove necesita el desplazamiento total.
		this.transform.DOMove(targetPosition, 0.25f);
		Invoke("Reset", 0.25f);

		return true;
	}
}
