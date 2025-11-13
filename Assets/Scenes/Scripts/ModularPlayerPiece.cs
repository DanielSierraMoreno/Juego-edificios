using System.Collections.Generic;
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
				if(PlayerController.Instance.currentSavedMove.painted == null)
					PlayerController.Instance.currentSavedMove.painted = new List<GameObject>();

				PlayerController.Instance.currentSavedMove.painted.Add(Instantiate(levelConditions.paintInstance, this.transform.position, Quaternion.identity));
				
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
		if (other.gameObject.GetComponent<PusheableBox>() != null)
		{
			Vector3 localPosition = other.transform.InverseTransformPoint(this.transform.position);

			// 2. Determinar la dirección de empuje (Local X vs Local Z)
			Vector3 finalPushDirectionLocal = Vector3.zero;

			// El tamaño de la caja se puede obtener aquí, pero usaremos el umbral fijo 
			// de 0.95 basado en tu solicitud. Asumimos una unidad de tamaño base.
			float threshold = 0.5f;

			// Comparamos el valor absoluto para encontrar el eje dominante
			if (Mathf.Abs(localPosition.x) > Mathf.Abs(localPosition.z))
			{
				// El Pusher está más alejado en el Eje X local (Lateral)

				if (localPosition.x > threshold) // Empuje desde la izquierda de la caja (Eje X positivo)
				{
					// La dirección final es el Eje X local POSITIVO
					finalPushDirectionLocal = Vector3.right;
				}
				else if (localPosition.x < -threshold) // Empuje desde la derecha de la caja (Eje X negativo)
				{
					// La dirección final es el Eje X local NEGATIVO
					finalPushDirectionLocal = Vector3.left;
				}
			}
			else
			{
				// El Pusher está más alejado en el Eje Z local (Frontal/Trasero)

				if (localPosition.z > threshold) // Empuje desde atrás de la caja (Eje Z positivo)
				{
					// La dirección final es el Eje Z local POSITIVO
					finalPushDirectionLocal = Vector3.forward;
				}
				else if (localPosition.z < -threshold) // Empuje desde adelante de la caja (Eje Z negativo)
				{
					// La dirección final es el Eje Z local NEGATIVO
					finalPushDirectionLocal = Vector3.back;
				}
			}

			// --- 3. Convertir la dirección local a dirección mundial y empujar ---

			if (finalPushDirectionLocal != Vector3.zero)
			{
				// Transformar el vector de dirección (que es LOCAL: 1,0,0 o 0,0,1) al espacio MUNDIAL
				// La dirección de empuje es el eje de la caja que queremos mover.
				Vector3 finalPushDirectionWorld = other.transform.TransformDirection(finalPushDirectionLocal);

				// Normalizar la dirección final (aunque ya lo estará)
				finalPushDirectionWorld.Normalize();

				if (other.gameObject.GetComponent<PusheableBox>().Push(-finalPushDirectionWorld))
					return;
			}

		}

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