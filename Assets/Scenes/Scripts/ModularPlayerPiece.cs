using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

public class ModularPlayerPiece : MonoBehaviour
{
	public bool choque = false;
	public bool isGrounded;
	public bool isBox = false; // Se actualiza en Update()

	// Distancia del Raycast (LayerMask sigue siendo (1 << 3) | (1 << 6))
	private const float RAY_DISTANCE = 0.55f;
	private const int GROUND_MASK = (1 << 3) | (1 << 6);
	LevelConditions levelConditions;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{
		levelConditions = FindObjectOfType<LevelConditions>();

	}

	// Update is called once per frame
	void Update()
	{
		Vector3 rayOrigin = transform.position;
		RaycastHit hit; // Variable para almacenar la información del impacto

		// Ejecutar el Raycast
		isGrounded = Physics.Raycast(rayOrigin, Vector3.down, out hit, RAY_DISTANCE, GROUND_MASK);

		// --- Lógica de Detección de Capa (NUEVO) ---
		if (isGrounded)
		{
			// La propiedad 'layer' de un GameObject es un int (0-31)
			int hitLayer = hit.collider.gameObject.layer;

			if (hitLayer == 6)
			{
				// Si golpea la capa 6 (asumimos que es la capa de la "Caja")
				isBox = true;
			}
			else if (hitLayer == 3)
			{
				// Si golpea la capa 3 (asumimos que es la capa del "Suelo Normal")
				isBox = false;
			}
			// Si golpea otra capa (lo cual no debería ocurrir con la máscara actual) no hacemos nada,
			// pero si la máscara cambiara, la variable mantendría su último valor.
		}



	}

	public void Paint()
	{
		if (!isBox && isGrounded)
		{
			// 1. Encontrar el objeto más cercano. Si no hay ninguno, 'paint' será null.
			GameObject paint = GameObject.FindGameObjectsWithTag("Paint")
				.OrderBy(p => Vector3.Distance(this.transform.position, p.transform.position))
				.FirstOrDefault();

			// 2. Determinar la distancia de control de forma segura:
			//    Si 'paint' es null, la distancia es 'Mathf.Infinity' (garantizando > 0.5f).
			//    Si 'paint' NO es null, la distancia es la distancia real.
			float distanceToClosest = (paint != null)
				? Vector3.Distance(this.transform.position, paint.transform.position)
				: Mathf.Infinity;

			// 3. Ejecutar la acción si la distancia supera el límite.
			if (distanceToClosest > 0.5f)
			{
				Instantiate(levelConditions.paintInstance, this.transform.position, Quaternion.identity);

				// Incrementa el contador solo si la instancia del ManagerPlayer existe
				if (ManagerPlayer.Instance != null)
				{
					ManagerPlayer.Instance.currentPaint++;
				}
			}
		}

	}
	private void OnTriggerStay(Collider other)
	{
		if (!other.isTrigger)
		{
			choque = true;
			Invoke("ResetCol", 0.1f);
		}
	}

	void ResetCol()
	{
		choque = false;

	}
}