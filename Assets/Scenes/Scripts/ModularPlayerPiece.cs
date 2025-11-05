using UnityEngine;

public class ModularPlayerPiece : MonoBehaviour
{
	public bool choque = false;
	public bool isGrounded;
	public bool isBox = false; // Se actualiza en Update()

	// Distancia del Raycast (LayerMask sigue siendo (1 << 3) | (1 << 6))
	private const float RAY_DISTANCE = 0.55f;
	private const int GROUND_MASK = (1 << 3) | (1 << 6);

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{

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
		else
		{
			// Si el raycast no golpea nada, no estamos en el suelo y isBox se reinicia a false
			// (o mantiene su valor, dependiendo de tu lógica de juego. false es más seguro).
			isBox = false;
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