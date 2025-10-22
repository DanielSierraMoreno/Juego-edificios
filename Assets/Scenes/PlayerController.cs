using UnityEngine;
using DG.Tweening;
using System.Collections;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UIElements;
using UnityEngine.Events;
public class PlayerController : MonoBehaviour
{// Variables de configuración

	[Header("Configuración del Arrastre")]
	// Offset mínimo de distancia en píxeles.
	public float minSwipeDistance = 50f;

	// Umbral para asegurar que el movimiento es diagonal (entre 0 y 1).
	public float diagonalThreshold = 0.5f;

	// Variables internas para el seguimiento
	private Vector2 startPosition;
	private bool isDragging = false; // Bandera para saber si ya estamos arrastrando
	private bool swipeDetected = false; // Bandera para asegurar que la detección solo ocurre una vez por arrastre

	public float gravityForce = -9;
	public bool isGrounded;
	public float gravityVel = 0;



	public bool CanMove = true;
	public bool error = false;
	public List<ModularPlayerPiece> pieces;
	// -----------------------------------------------------------------------------------
	private Tween currentMoveTween;
	private Tween currentRotateTween;

	Vector3 currentPosition;

	private Quaternion savedInitialRotation; // Usar Quaternion para rotación precisa
	float timeSaved = 0;
	public Material selectedMaterial, pivotMaterial;

	float lastMoveTime = 0;

	UnityEvent aa;

	enum Direction { LEFTUP, RIGHTUP, LEFTDOWN, RIGHTDOWN, NONE};
	Direction direction = Direction.NONE;
	public static PlayerController Instance { get; private set; }

	private void Awake()
	{
		if (Instance != null && Instance != this)
		{
			// Si ya existe una instancia y no es esta, destruye esta copia.
			Destroy(gameObject);
			return;
		}

		Instance = this;
		// Opcional: Para mantener el objeto vivo entre escenas.
		// DontDestroyOnLoad(gameObject);
	}

	void Update()
	{
		SetGrounded();



		// Ejemplo de uso:
		if (!isGrounded)
		{		
			gravityVel += gravityForce * Time.deltaTime;

			this.transform.parent.position += new Vector3(0, gravityVel * Time.deltaTime, 0);

		}
		else
		{
			RaycastHit hitInfo;


			if (Physics.Raycast(this.transform.position, Vector3.down, out hitInfo, 0.7f, ~3, QueryTriggerInteraction.Ignore))
			{
				this.transform.position = new Vector3(this.transform.position.x, hitInfo.point.y + 0.5f, this.transform.position.z);
			}

				gravityVel = 0;
		}

		bool errorSave = false;
		for (int i = 0; i < pieces.Count; i++)
		{
			if (pieces[i].choque)
			{
				errorSave = true;
			}
		}

		if (errorSave)
		{
			if (!error)
			{
				CancelInvoke("ResetCanMove");
				lastMoveTime = Time.time;

				CanMove = false;
				currentMoveTween.Kill();
				currentMoveTween = this.transform.DOMove(currentPosition, (Time.time - timeSaved));

				currentRotateTween.Kill();

				currentRotateTween = this.transform.DORotate(savedInitialRotation.eulerAngles, (Time.time - timeSaved));
				error = true;
				Invoke("ResetCanMoveError", (Time.time - timeSaved) + 0.25f);
			}
		}

		if (!CanMove)
		{
			if ((Time.time - lastMoveTime) > 0.25f)
			{
				CheckSavedMove();

			}
			return;
		}
		if (direction != Direction.NONE)
		{
			ApplySavedMove();
		}
		// 1. INICIO de Clic (o toque)
		if (Input.GetMouseButtonDown(0))
		{
			startPosition = Input.mousePosition;
			isDragging = true;
			swipeDetected = false;
		}

		// 2. MANTENIMIENTO del Clic (Detección continua)
		// Solo verificamos si estamos arrastrando y si NO hemos detectado el arrastre todavía.
		if (isDragging && !swipeDetected && (Time.time -lastMoveTime) > 0.25f)
		{
			Vector2 currentPosition = Input.mousePosition;

			// Calcular distancia recorrida desde el inicio
			Vector2 swipeVector = currentPosition - startPosition;
			float swipeDistance = swipeVector.magnitude;

			// Comprobar si se ha alcanzado el offset mínimo
			if (swipeDistance >= minSwipeDistance)
			{

				// ¡Offset mínimo alcanzado!

				// Marcamos como detectado para que no se ejecute continuamente en este arrastre.
				swipeDetected = true;

				// Determinar dirección diagonal
				Vector2 direction = swipeVector.normalized;
				float horizontalComponent = direction.x;
				float verticalComponent = direction.y;

				// 3. Comprobación Diagonal
				if (Mathf.Abs(horizontalComponent) >= diagonalThreshold && Mathf.Abs(verticalComponent) >= diagonalThreshold)
				{
					// Definimos el cambio de rotación (delta) para la operación relativa
					Vector3 deltaRotation;
					Vector3 targetPosition;
					float duration = 0.5f;

					if (verticalComponent > 0) // Arriba
					{
						if (horizontalComponent < 0) // Arriba Izquierda
						{
							Move(new Vector3(0, 0, 1));

							// Movimiento: +Z (Adelante)
							targetPosition = transform.position + new Vector3(0, 0, 1);
							// Rotación: +90 en X (o la rotación deseada para este giro)
							deltaRotation = new Vector3(90, 0, 0);

						}
						else // Arriba Derecha
						{
							Move(new Vector3(1, 0, 0));

							// Movimiento: +X (Derecha)
							targetPosition = transform.position + new Vector3(1, 0, 0);
							// Rotación: -90 en Z
							deltaRotation = new Vector3(0, 0, -90);

						}
					}
					else // Abajo (verticalComponent < 0)
					{
						if (horizontalComponent < 0) // Abajo Izquierda
						{
							Move(new Vector3(-1, 0, 0));

							// Movimiento: -X (Izquierda)
							targetPosition = transform.position + new Vector3(-1, 0, 0);
							// Rotación: +90 en Z
							deltaRotation = new Vector3(0, 0, 90);
						}
						else // Abajo Derecha
						{
							Move(new Vector3(0, 0, -1));

							// Movimiento: -Z (Atrás)
							targetPosition = transform.position + new Vector3(0, 0, -1);
							// Rotación: -90 en X
							deltaRotation = new Vector3(-90, 0, 0);

						}

					}

					lastMoveTime = Time.time;

					timeSaved = Time.time;
					this.currentPosition = transform.position;
					// 1. Mueve el objeto a la nueva posición
					currentMoveTween = this.transform.DOMove(targetPosition, duration);

					savedInitialRotation = transform.rotation; // Guardamos la rotación como Quaternion
					currentRotateTween = this.transform.DORotate(deltaRotation, duration, RotateMode.WorldAxisAdd); // ¡La clave para la rotación incremental!
					CanMove = false;
					Invoke("ResetCanMove", 0.6f);



				}
				else
				{
					Debug.Log("Arrastre detectado (distancia mínima), pero no fue claramente diagonal.");
				}
			}
		}

		// 4. FIN de Clic (o toque)
		// Reiniciamos el estado de arrastre cuando el usuario suelta.
		if (Input.GetMouseButtonUp(0))
		{
			isDragging = false;
		}






	}

	void CheckSavedMove()
	{
		if (Input.GetMouseButtonDown(0))
		{
			startPosition = Input.mousePosition;
			isDragging = true;
			swipeDetected = false;
		}

		// 2. MANTENIMIENTO del Clic (Detección continua)
		// Solo verificamos si estamos arrastrando y si NO hemos detectado el arrastre todavía.
		if (isDragging && !swipeDetected && (Time.time - lastMoveTime) > 0.25f)
		{
			Vector2 currentPosition = Input.mousePosition;

			// Calcular distancia recorrida desde el inicio
			Vector2 swipeVector = currentPosition - startPosition;
			float swipeDistance = swipeVector.magnitude;

			// Comprobar si se ha alcanzado el offset mínimo
			if (swipeDistance >= minSwipeDistance)
			{

				// ¡Offset mínimo alcanzado!

				// Marcamos como detectado para que no se ejecute continuamente en este arrastre.
				swipeDetected = true;

				// Determinar dirección diagonal
				Vector2 direction = swipeVector.normalized;
				float horizontalComponent = direction.x;
				float verticalComponent = direction.y;

				// 3. Comprobación Diagonal
				if (Mathf.Abs(horizontalComponent) >= diagonalThreshold && Mathf.Abs(verticalComponent) >= diagonalThreshold)
				{
					// Definimos el cambio de rotación (delta) para la operación relativa
					Vector3 deltaRotation;
					Vector3 targetPosition;
					float duration = 0.5f;

					if (verticalComponent > 0) // Arriba
					{
						if (horizontalComponent < 0) // Arriba Izquierda
						{
							this.direction = Direction.LEFTUP;

						}
						else // Arriba Derecha
						{
							this.direction = Direction.RIGHTUP;


						}
					}
					else // Abajo (verticalComponent < 0)
					{
						if (horizontalComponent < 0) // Abajo Izquierda
						{
							this.direction = Direction.LEFTDOWN;

						}
						else // Abajo Derecha
						{
							this.direction = Direction.RIGHTDOWN;


						}

					}
				}
			}
		}

		// 4. FIN de Clic (o toque)
		// Reiniciamos el estado de arrastre cuando el usuario suelta.
		if (Input.GetMouseButtonUp(0))
		{
			isDragging = false;
		}
	}

	
	void ApplySavedMove()
	{
		Vector3 targetPosition = Vector3.zero, deltaRotation = Vector3.zero;

			if (this.direction == Direction.LEFTUP) // Arriba Izquierda
			{
				Move(new Vector3(0, 0, 1));

				// Movimiento: +Z (Adelante)
				targetPosition = transform.position + new Vector3(0, 0, 1);
				// Rotación: +90 en X (o la rotación deseada para este giro)
				deltaRotation = new Vector3(90, 0, 0);

			}
			if (this.direction == Direction.RIGHTUP) // Arriba Izquierda
			{

			Move(new Vector3(1, 0, 0));

				// Movimiento: +X (Derecha)
				targetPosition = transform.position + new Vector3(1, 0, 0);
				// Rotación: -90 en Z
				deltaRotation = new Vector3(0, 0, -90);

			}

			if (this.direction == Direction.LEFTDOWN) // Arriba Izquierda
			{
			Move(new Vector3(-1, 0, 0));

				// Movimiento: -X (Izquierda)
				targetPosition = transform.position + new Vector3(-1, 0, 0);
				// Rotación: +90 en Z
				deltaRotation = new Vector3(0, 0, 90);
			}
			if (this.direction == Direction.RIGHTDOWN) // Arriba Izquierda
			{
			Move(new Vector3(0, 0, -1));

				// Movimiento: -Z (Atrás)
				targetPosition = transform.position + new Vector3(0, 0, -1);
				// Rotación: -90 en X
				deltaRotation = new Vector3(-90, 0, 0);

			}

		

		lastMoveTime = Time.time;

		timeSaved = Time.time;
		this.currentPosition = transform.position;
		// 1. Mueve el objeto a la nueva posición
		currentMoveTween = this.transform.DOMove(targetPosition, 0.5f);

		savedInitialRotation = transform.rotation; // Guardamos la rotación como Quaternion
		currentRotateTween = this.transform.DORotate(deltaRotation, 0.5f, RotateMode.WorldAxisAdd); // ¡La clave para la rotación incremental!
		CanMove = false;
		Invoke("ResetCanMove", 0.6f);

		this.direction = Direction.NONE;
	}
	void ResetCanMove()
	{
		if(!error && isGrounded)
		{
			CanMove = true;


			for (int i = 0; i < pieces.Count; i++)
			{
				if(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces.Count > 0)
				{
					for(int j = 0; j < pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces.Count; j++) 
					{
						if(!pieces.Contains(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<ModularPlayerPiece>()) && pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].type == CheckNewModules.Type.PLAYER_MODULE)
						{
							pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].transform.position = new Vector3(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].transform.position.x, pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().transform.position.y, pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].transform.position.z);

							pieces.Add(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<ModularPlayerPiece>());
							pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<MeshRenderer>().material = selectedMaterial;
						}
					}
				}

			}

			for (int i = 0; i < pieces.Count; i++)
			{
				if (pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces.Count > 0)
				{
					for (int j = 0; j < pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces.Count; j++)
					{
						pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].PlayEvent();
					}
				}
			}
					ManagerPlayer.Instance.CheckEnd();
		}
	}
	void ResetCanMoveError()
	{
		error = false;
		CanMove = true;




	}
	IEnumerator ReturnRotation(Vector3 po, Vector3 rot)
	{
		yield return new WaitForSeconds(0.2f);

		this.transform.DOLocalMove(transform.position + (po * 0.1f), 0.2f);

		// 2. Rota el objeto con la rotación relativa (se suma al valor actual)
		this.transform.DORotate(-rot / 6, 0.2f, RotateMode.WorldAxisAdd); // ¡La clave para la rotación incremental!
		yield return new WaitForSeconds(0.2f);

		CanMove = true;
	}
	// -----------------------------------------------------------------------------------

	void SetGrounded()
	{
		bool ground = false;
		for(int i = 0; i < pieces.Count; i++)
		{
			if (pieces[i].isGrounded)
			{
				ground = true;
			}
		}

		if(!isGrounded && ground)
		{
			isGrounded = ground;

			ResetCanMove();
		}
		if (isGrounded && !ground)
		{
			CanMove = false;
		}

		isGrounded = ground;


	}


	bool Move(Vector3 dir)
	{
		const float SIGNIFICANT_OFFSET = 0.5f;
		const float DISTANCE_TOLERANCE = 0.7f; // Las piezas dentro de este margen se consideran "empatadas"

		// 1. Encuentra la distancia máxima de las piezas grounded
		float maxDistance = pieces
			.Where(piece => piece.isGrounded)
			.Max(piece => Vector3.Dot(piece.transform.position, dir));

		// 2. Encuentra la pieza de referencia (la que tiene la maxDistance)
		ModularPlayerPiece referencePiece = pieces
			.FirstOrDefault(piece => piece.isGrounded &&
									 Mathf.Abs(Vector3.Dot(piece.transform.position, dir) - maxDistance) < 0.0001f);

		ModularPlayerPiece finalPiece = null;

		if (referencePiece != null)
		{
			float refHeight = Vector3.Dot(referencePiece.transform.position, Vector3.up);

			// 3. Filtra las piezas que están "casi empatadas" en distancia
			finalPiece = pieces
				.Where(piece => piece.isGrounded &&
								Vector3.Dot(piece.transform.position, dir) >= (maxDistance - DISTANCE_TOLERANCE))

				// 4. Ordenación Principal: Altura con Offset (Prioridad 1)
				// Cualquier pieza en el grupo de empate que sea SIGNIFICATIVAMENTE más alta (>= 0.5f) gana.
				.OrderByDescending(piece => {
					float currentHeight = Vector3.Dot(piece.transform.position, Vector3.up);

					// Si es MÁS ALTA que la referencia + offset, le damos una gran ventaja.
					if ((currentHeight - refHeight) >= SIGNIFICANT_OFFSET)
					{
						return 1000f;
					}
					// Si no tiene el offset significativo, usamos su altura real como desempate estándar.
					return currentHeight;
				})

				// 5. Segundo Desempate: Distancia real
				// Si hay un empate en el offset de altura, el más lejano gana.
				.ThenByDescending(piece => Vector3.Dot(piece.transform.position, dir))

				// 6. Selección: El ganador del desempate
				.FirstOrDefault();
		}

		// Si no se encontró ningún "empate" válido o pieza, usamos la pieza de referencia original
		if (finalPiece == null)
		{
			finalPiece = referencePiece;
		}

		if (finalPiece != null)
		{
			// ... (Tu lógica de movimiento y renderizado permanece igual)
			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.GetComponent<MeshRenderer>().material = selectedMaterial;
			}
			finalPiece.GetComponent<MeshRenderer>().material = pivotMaterial;

			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform.parent;
			}

			this.transform.position = finalPiece.transform.position;

			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform;
			}
			return true;
		}
		return false;
	}
}
