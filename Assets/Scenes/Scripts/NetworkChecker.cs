using UnityEngine;
using TMPro;

public class NetworkChecker : MonoBehaviour
{
	// --- Referencias UI (Asignar en el Inspector) ---
	public GameObject warningPanel;

	// --- Mensaje de Aviso ---
	// Puedes añadir una variable aquí para el mensaje si quieres que sea visible en el Inspector.

	// --- Estado de Conexión ---
	private bool isConnected = true;
	private bool isGameBlocked = false;

	// ------------------------------------------------------------------------------------------

	void Start()
	{
		// Asumimos que aquí tienes la lógica de Singleton para DontDestroyOnLoad
		// para evitar duplicados al cargar nuevas escenas.
		DontDestroyOnLoad(this.gameObject);

		// Inicializa el estado base al entrar
		isConnected = HasRequiredConnection();

		// Oculta el panel al inicio por defecto
		if (warningPanel != null)
		{
			warningPanel.SetActive(false);
		}

		if (!isConnected)
		{
			BlockGame(true);
		}
		else
		{
			Debug.Log("Juego iniciado con conexión.");
		}
	}

	void Update()
	{
		// 1. Verificar el estado actual de la conexión en cada frame
		bool currentStatus = HasRequiredConnection();

		// 2. Comprobar si ha habido un cambio de estado
		if (currentStatus != isConnected)
		{
			isConnected = currentStatus;

			if (isConnected)
			{
				// Conexión recuperada (WiFi o Datos Móviles)
				BlockGame(false);
			}
			else
			{
				// Conexión perdida (ninguna)
				BlockGame(true);
			}
		}
	}

	// ------------------------------------------------------------------------------------------

	/// <summary>
	/// Muestra u oculta el panel de aviso y gestiona el estado de bloqueo del juego.
	/// </summary>
	private void BlockGame(bool shouldBlock)
	{
		if (isGameBlocked == shouldBlock) return;

		isGameBlocked = shouldBlock;

		if (isGameBlocked)
		{
			// --- LÓGICA DE BLOQUEO ---
			if (warningPanel != null)
			{
				warningPanel.SetActive(true);
				Debug.Log("Juego BLOQUEADO: Conexión de red requerida perdida.");
			}
			// Time.timeScale = 0f; 
		}
		else
		{
			// --- LÓGICA DE DESBLOQUEO ---
			if (warningPanel != null)
			{
				warningPanel.SetActive(false);
			}
			Debug.Log("Juego DESBLOQUEADO: Conexión de red recuperada.");
			// Time.timeScale = 1f; 
		}
	}

	public bool HasRequiredConnection()
	{
		NetworkReachability reachability = Application.internetReachability;

		// ?? MODIFICACIÓN CLAVE: Incluir datos móviles.
		if (reachability == NetworkReachability.ReachableViaLocalAreaNetwork ||
			reachability == NetworkReachability.ReachableViaCarrierDataNetwork)
		{
			return true;
		}

		// Si no hay conexión (NotReachable) o si ReachableViaCarrierDataNetwork falla por alguna razón.
		return false;
	}
}