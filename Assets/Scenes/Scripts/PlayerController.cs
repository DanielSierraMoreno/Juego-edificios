using UnityEngine;
using DG.Tweening;
using System.Collections;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UIElements;
using UnityEngine.Events;
using Unity.Cinemachine;
using MoreMountains.Feedbacks;
using Unity.VisualScripting;
using UnityEngine.Rendering;
public class PlayerController : MonoBehaviour
{// Variables de configuración
	[System.Serializable]
	public struct PusheableBoxStruct
	{
		public PusheableBox box;
		public Vector3 movement;
		public Vector3 currentPos;

	}
	private int _pendingMMFPlayers = 0;
	[System.Serializable]
	public struct savedMove
	{
		public float fallDistance;
		public Vector3 pivotPos;
		public Vector3 movement;
		public Vector3 rotation;
		public Vector3 externalMove;
		public float externalMoveTime;

		public List<ModularPlayerPiece> added;
		public List<GameObject> painted;
		public List<UnityEvent> events;
		public List<PusheableBoxStruct> pusheableBoxes;

	}
	[SerializeField]
	public List<savedMove> historialMovimientos;

	[SerializeField]
	public savedMove currentSavedMove;


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

	float lastMoveTime = 0;
	bool moved = true;
	UnityEvent aa;

	public CinemachineCamera cam;
	public bool stop = false;
	enum Direction { LEFTUP, RIGHTUP, LEFTDOWN, RIGHTDOWN, NONE};
	Direction direction = Direction.NONE;
	public static PlayerController Instance { get; private set; }
	LevelConditions levelConditions;

	public bool ResetMove = false;
	public bool externalMove = false;
	public AudioSource movSound, errorSound;
	private void Awake()
	{
		historialMovimientos = new List<savedMove>();
		levelConditions = FindObjectOfType<LevelConditions>();

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

	public void SetStop(bool i)
	{
		stop = i;
	}
	Vector3 pos;
	

	public void SetExternalMove(bool i)
	{
		externalMove = i;

	}


	void Update()
	{


		if (FindObjectOfType<GameDataManager>() != null)
		{
			if (NetworkChecker.Instance == null)
			{
				return;
			}

			if (!NetworkChecker.Instance.isConnected)
			{
				return;
			}
			// 🛑 BLOQUEO DE ENTRADA: Si el gestor de datos no está listo, sal del Update.
			if (!GameDataManager.IsReady)
			{
				return;
			}
		}



		if (ResetMove)
			return;

		if (ManagerPlayer.Instance.pause)
			return;

		SetGrounded();



		// Ejemplo de uso:
		if (!isGrounded)
		{		
			gravityVel += gravityForce * Time.deltaTime;

			this.transform.parent.position += new Vector3(0, gravityVel * Time.deltaTime, 0);

			if (lastMoveTime != 0)
				currentSavedMove.fallDistance += gravityVel * Time.deltaTime;

		}
		else
		{
			RaycastHit hitInfo;


			if (Physics.Raycast(this.transform.position, Vector3.down, out hitInfo, 0.75f, ~3, QueryTriggerInteraction.Ignore))
			{
				this.transform.position = new Vector3(this.transform.position.x, hitInfo.point.y + 0.505f, this.transform.position.z);
			}

				gravityVel = 0;
		}

		if (externalMove)
		{

			int lastIndex = historialMovimientos.Count - 1;
			savedMove lastMove = historialMovimientos[lastIndex];

			// 2. Modificar la Copia local (lastMove)
			// La variable 'pos' debe estar definida en el contexto donde ejecutas esto.
			lastMove.externalMove -= transform.position - pos;
			lastMove.externalMoveTime += Time.deltaTime;

			// O si quieres simplemente asignar un valor:
			// lastMove.externalMove = transform.position - pos;

			// 3. Reemplazar la estructura en el historial con la copia modificada
			historialMovimientos[lastIndex] = lastMove; 
			

			pos = transform.position;
			return;
		}
		pos = transform.position;

		if (stop)
			return;

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
				currentSavedMove.fallDistance = 0;
				currentSavedMove.rotation = Vector3.zero;
				CanMove = false;
				currentMoveTween.Kill();
				currentMoveTween = this.transform.DOMove(currentPosition, (Time.time - timeSaved));
				currentSavedMove.movement = Vector3.zero;
				currentSavedMove.pivotPos = Vector3.zero;

				currentRotateTween.Kill();
				errorSound.Play();

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

		if (direction != Direction.NONE && CanMove && (Time.time - lastMoveTime) > 0.25f)
		{
			Invoke("ApplySavedMove", 0.0f);

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
		if (isDragging && !swipeDetected && (Time.time -lastMoveTime) > 0.25f && CanMove && !moved)
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
					Debug.Log("Move" + Time.time);
					movSound.Play();

					lastMoveTime = Time.time;
					moved = true;
					timeSaved = Time.time;
					this.currentPosition = transform.position;
					// 1. Mueve el objeto a la nueva posición

					currentMoveTween.Kill();
					currentMoveTween = this.transform.DOMove(targetPosition, duration);
					
					currentRotateTween.Kill();
					savedInitialRotation = transform.rotation; // Guardamos la rotación como Quaternion
					currentRotateTween = this.transform.DORotate(deltaRotation, duration, RotateMode.WorldAxisAdd); // ¡La clave para la rotación incremental!
					CanMove = false;
					Invoke("ResetCanMove", 0.55f);
					currentSavedMove.movement = transform.position;
					currentSavedMove.rotation = -deltaRotation;


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

	void Moved()
	{

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
        if (!CanMove)
			return;
		Debug.Log("Saved Move" + Time.time);

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


		movSound.Play();
		lastMoveTime = Time.time;
		moved = true;

		timeSaved = Time.time;

		currentMoveTween.Kill();
		this.currentPosition = transform.position;
		// 1. Mueve el objeto a la nueva posición
		currentMoveTween = this.transform.DOMove(targetPosition, 0.5f);

		currentRotateTween.Kill();
		savedInitialRotation = transform.rotation; // Guardamos la rotación como Quaternion
		currentRotateTween = this.transform.DORotate(deltaRotation, 0.5f, RotateMode.WorldAxisAdd); // ¡La clave para la rotación incremental!
		CanMove = false;
		Invoke("ResetCanMove", 0.55f);
		currentSavedMove.movement = transform.position;
		currentSavedMove.rotation = -deltaRotation;
		this.direction = Direction.NONE;
	}
	void move()
	{
		CanMove = true;

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
							pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].PlayEvent(true);

							pieces.Add(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<ModularPlayerPiece>());

							if(currentSavedMove.added == null)
								currentSavedMove.added = new List<ModularPlayerPiece>();

							currentSavedMove.added.Add(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<ModularPlayerPiece>());

							if (levelConditions.conditions == LevelConditions.Conditions.CONNECT)
							{
								ManagerPlayer.Instance.connect++;
							}


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
						if(pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].GetComponentInParent<ModularPlayerPiece>() == null)
							pieces[i].gameObject.GetComponentInChildren<CheckNewModules>().pieces[j].PlayEvent(false);
					}
				}
			}

			switch (levelConditions.conditions)
			{
				case LevelConditions.Conditions.BUTTONS:

					break;
				case LevelConditions.Conditions.PAINT:
					for (int i = 0; i < pieces.Count; i++)
					{
						pieces[i].Paint();
					}
					break;
			}
			currentSavedMove.pivotPos = this.transform.position;

			currentSavedMove.movement.x = Mathf.Round(currentSavedMove.movement.x);
			currentSavedMove.movement.y = Mathf.Round(currentSavedMove.movement.y);
			currentSavedMove.movement.z = Mathf.Round(currentSavedMove.movement.z);

			// Redondeando los valores de currentSavedMove.pivotPos
			currentSavedMove.pivotPos.x = Mathf.Round(currentSavedMove.pivotPos.x);
			currentSavedMove.pivotPos.y = Mathf.Round(currentSavedMove.pivotPos.y);
			currentSavedMove.pivotPos.z = Mathf.Round(currentSavedMove.pivotPos.z);



			if (currentSavedMove.fallDistance > -1f && currentSavedMove.fallDistance < -0f)
				currentSavedMove.fallDistance = 0f;

			if (currentSavedMove.movement != Vector3.zero)
			{
				historialMovimientos.Add(currentSavedMove);

				Debug.Log("Saved Historial" + Time.time);

			}



				currentSavedMove = new savedMove();

			ManagerPlayer.Instance.CheckEnd();

			if (moved && lastMoveTime != 0)
				ManagerPlayer.Instance.actualMovements++;




			moved = false;

		}
	}
	void ResetCanMoveError()
	{
		error = false;
		CanMove = true;

		moved = false;



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

	public bool IsModuleIncluded(ModularPlayerPiece piece)
	{
		return pieces.Contains(piece);
	}

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
			RaycastHit hitInfo;


			if (Physics.Raycast(this.transform.position, Vector3.down, out hitInfo, 0.7f, ~3, QueryTriggerInteraction.Ignore))
			{
				this.transform.position = new Vector3(this.transform.position.x, hitInfo.point.y+0.51f, this.transform.position.z);
			}
			gravityVel = 0;
		}
		
		if ((isGrounded&& (Time.time - lastMoveTime) > 0.625f && !CanMove && moved) || (lastMoveTime == 0 && isGrounded))
		{
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
				pieces[i].transform.parent = this.transform.parent;
			}
			this.transform.eulerAngles = Vector3.zero;

			this.transform.position = finalPiece.transform.position;

			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform;
			}
			return true;
		}
		return false;
	}
	public void OnMMFPlayerCompleted()
	{
		_pendingMMFPlayers--;
		// Debug.Log($"MMFPlayer completado. Pendientes: {_pendingMMFPlayers}");
	}

	public void ResetingMove()
	{
		StartCoroutine("ResetingMoveCoroutine", 0);
	}
	public IEnumerator ResetingMoveCoroutine()
	{
		isDragging = false;
		ResetMove = true;
		savedMove savedMove = historialMovimientos[historialMovimientos.Count - 1];
		historialMovimientos.RemoveAt(historialMovimientos.Count - 1); 
		ManagerPlayer.Instance.actualMovements--;

		if(savedMove.externalMove == Vector3.zero)
		{
			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform.parent;
			}
			this.transform.eulerAngles = Vector3.zero;
			this.transform.position = savedMove.pivotPos;

			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform;
			}
		}



		if (savedMove.painted != null)
		{
			foreach (GameObject go in savedMove.painted)
			{
				// Esta es la VERIFICACIÓN CRUCIAL.
				// Si 'go' es null (la referencia se perdió o el objeto fue destruido), 
				// el código simplemente salta el cuerpo del if.
				if (go != null)
				{
					UnityEngine.Object.Destroy(go);
					ManagerPlayer.Instance.currentPaint--;

				}
			}

			// Esto es seguro y limpia las referencias null
			savedMove.painted.Clear();
		}

		if(savedMove.added != null)
		{
			GameObject objetoEncontrado = GameObject.Find("ENVIRONMENT PIECES");

			if (objetoEncontrado != null)
			{

				Transform nuevoParent = objetoEncontrado.transform;

				// 3. Iterar sobre todos los elementos añadidos y cambiar su parent
				foreach (ModularPlayerPiece go in savedMove.added)
				{
					// Verificación de seguridad, por si el objeto fue destruido
					if (go != null)
					{
						pieces.Remove(go);
						// CAMBIAR EL PARENT
						go.transform.SetParent(nuevoParent);
						go.transform.GetChild(0).GetComponent<MMF_Player>().PlayFeedbacks();
						ManagerPlayer.Instance.connect--;
					}
				}


			}
			savedMove.added.Clear();
		}

		// =======================================================================
		// 4. LÓGICA DE EVENTOS (MMFPlayer) Y ESPERA INTEGRADA
		// =======================================================================

		if (savedMove.externalMove != Vector3.zero)
		{

			currentMoveTween = this.transform.DOMove(this.transform.position + savedMove.externalMove, savedMove.externalMoveTime+0.1f);

		}


		if (savedMove.events != null)
		{
			// [CAMBIO CLAVE 1]: Inicializar el contador
			_pendingMMFPlayers = savedMove.events.Count;

			foreach (UnityEvent eve in savedMove.events)
			{
				// Dispara el MMFPlayer. Al terminar, cada uno llama a OnMMFPlayerCompleted().
				eve.Invoke();
			}

			// [CAMBIO CLAVE 2]: Esperar a que el contador sea cero.
			// Si savedMove.events es null, esta sección se omite y el código continúa.
			while (_pendingMMFPlayers > 0)
			{
				yield return null; // Espera un frame
			}
			// Debug.Log("Todos los MMFPlayers han terminado. Continuando con la animación.");
		}


		if (savedMove.pusheableBoxes != null)
		{
			foreach (PusheableBoxStruct box in savedMove.pusheableBoxes)
			{
				box.box.transform.DOMove(box.currentPos, 0.15f);
			}

		}



		yield return new WaitForSeconds(0.1f);


		if (savedMove.externalMove != Vector3.zero)
		{
			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform.parent;
			}
			this.transform.eulerAngles = Vector3.zero;
			this.transform.position = savedMove.pivotPos;

			for (int i = 0; i < pieces.Count; i++)
			{
				pieces[i].transform.parent = this.transform;
			}
		}

		yield return new WaitForSeconds(0.05f);
		// =======================================================================
		// 5. ANIMACIÓN DE MOVIMIENTO/CAÍDA (Se ejecuta después de la espera)
		// =======================================================================

		if (savedMove.fallDistance < 0)
		{
			// Lógica de salto (movimiento vertical inicial para deshacer la caída)
			Vector3 targetPosition = this.transform.position - new Vector3(0, savedMove.fallDistance + 1, 0);
			float fallDuration = -savedMove.fallDistance * 0.25f;

			currentMoveTween = this.transform.DOMove(targetPosition, fallDuration);
			StartCoroutine(Reset(savedMove, fallDuration));
		}
		else
		{
			// No hubo caída, simplemente iniciar el Reset (que maneja el movimiento horizontal/rotación)
			StartCoroutine(Reset(savedMove, 0));
		}
	}

	IEnumerator Reset(savedMove savedMove, float time)
	{
		yield return new WaitForSeconds(time);

		if (savedMove.pusheableBoxes != null)
		{
			foreach (PusheableBoxStruct box in savedMove.pusheableBoxes)
			{
				box.box.transform.DOMove(box.movement, 0.5f);
			}

		}

		currentMoveTween.Kill();
		// 1. Mueve el objeto a la nueva posición
		currentMoveTween = this.transform.DOMove(savedMove.movement, 0.5f);

		currentRotateTween.Kill();

		currentRotateTween = this.transform.DORotate(savedMove.rotation, 0.5f, RotateMode.WorldAxisAdd);



		yield return new WaitForSeconds(0.55f);

		ResetMove = false;
		CanMove = true;
	}
}
