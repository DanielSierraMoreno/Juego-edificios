using UnityEngine;
using System;
using System.Collections;
using System.Net.Http;
using UnityEngine.Networking;

public class EnergyManager : MonoBehaviour
{
	// === Clase de Datos del Juego (Visible en el Inspector) ===
	[System.Serializable]
	public class GameManager
	{
		public int MAX_ENERGIA = 20;
		public int TIEMPO_RECARGA_SECS = 300; // 5 minutos * 60 segundos
		[Tooltip("Energía actual del jugador.")]
		public int EnergiaActual;
		[Tooltip("Hora UTC guardada al salir (en Ticks).")]
		public long UltimoAccesoTicks;

		// Claves de PlayerPrefs
		public string LLAVE_ENERGIA = "Energia";
		public string LLAVE_ACCESO = "Acceso";
	}

	[SerializeField]
	public GameManager gameManager; // Inicialización

	// --- Variables Privadas de Control ---
	private TimeManager timeManager;
	private Coroutine recargaCoroutine;

	// NUEVA VARIABLE CRÍTICA: Hora UTC en la que debe ocurrir la siguiente recarga (en Ticks).
	[Tooltip("Hora UTC en Ticks de la siguiente recarga de energía.")]
	private long ProximaRecargaTicks;
	private const string LLAVE_RECARGA_TICKS = "ProximaRecargaTicks"; // Clave de PlayerPrefs

	// VARIABLE DE CÁLCULO: Segundos restantes (Actualizada en Update)
	[Tooltip("Segundos restantes hasta que se recargue 1 punto de energía.")]
	[SerializeField]
	private int segundosRestantesRecarga;

	// ------------------------------------------------------------------------------------------

	void Awake()
	{
		// Implementación de Singleton
		var existingManagers = FindObjectsOfType<EnergyManager>();
		if (existingManagers.Length > 1)
		{
			Destroy(gameObject);
			return;
		}
		DontDestroyOnLoad(this.gameObject);
	}

	void Start()
	{
		timeManager = FindObjectOfType<TimeManager>();
		if (timeManager == null)
		{
			Debug.LogError("TimeManager no encontrado! Asegúrate de que está en la escena.");
			return;
		}

		CargarEstado();

		// Suscribirse y solicitar la hora UTC al inicio
		timeManager.OnTimeReceived += OnTimeReceived;
		timeManager.GetCurrentUTCTime();
	}

	// ------------------------------------------------------------------------------------------
	// === Lógica de Actualización de Tiempo y UI ===
	// ------------------------------------------------------------------------------------------

	void Update()
	{
		// Solo actualiza si no está lleno
		if (gameManager.EnergiaActual < gameManager.MAX_ENERGIA)
		{
			DateTime nowUtc = DateTime.UtcNow;
			// Convertir los Ticks guardados a DateTime
			DateTime targetTime = new DateTime(ProximaRecargaTicks, DateTimeKind.Utc);

			// Calcula el tiempo restante (TimeSpan)
			TimeSpan timeLeft = targetTime - nowUtc;

			// Si el tiempo se agotó (la recarga debió haber ocurrido)
			if (timeLeft.TotalSeconds <= 0)
			{
				segundosRestantesRecarga = 0;
			}
			else
			{
				// Actualiza el contador visual en tiempo real, redondeando hacia arriba.
				segundosRestantesRecarga = Mathf.CeilToInt((float)timeLeft.TotalSeconds);
			}
		}
		else
		{
			// Si está lleno, el contador es 0
			segundosRestantesRecarga = 0;
		}
	}


	// ------------------------------------------------------------------------------------------
	// === Lógica de Entrada/Salida (Guardado y Carga) ===
	// ------------------------------------------------------------------------------------------

	private void CargarEstado()
	{
		// Cargar Energía
		gameManager.EnergiaActual = PlayerPrefs.GetInt(gameManager.LLAVE_ENERGIA, gameManager.MAX_ENERGIA);

		// Cargar Hora de Salida (Ticks)
		string ticksString = PlayerPrefs.GetString(gameManager.LLAVE_ACCESO, "0");
		if (long.TryParse(ticksString, out long loadedTicks))
		{
			gameManager.UltimoAccesoTicks = loadedTicks;
		}
		else
		{
			gameManager.UltimoAccesoTicks = 0;
		}

		// CARGAR HORA DE LA PRÓXIMA RECARGA (CRÍTICO)
		string nextTicksString = PlayerPrefs.GetString(LLAVE_RECARGA_TICKS, "0");
		if (long.TryParse(nextTicksString, out long loadedNextTicks))
		{
			ProximaRecargaTicks = loadedNextTicks;
		}
		else
		{
			ProximaRecargaTicks = 0;
		}
	}

	private void OnTimeReceived(DateTime horaDeRegresoUTC)
	{
		// 1. Calcular la recarga (Offline)
		CalcularRecarga(horaDeRegresoUTC);

		// 2. Iniciar la recarga (Online)
		ReiniciarRecargaEnJuego();
	}

	private void CalcularRecarga(DateTime horaDeRegresoUTC)
	{
		if (gameManager.UltimoAccesoTicks == 0 || gameManager.EnergiaActual == gameManager.MAX_ENERGIA)
		{
			// Si es la primera vez o si ya estaba lleno, no hay recarga que calcular.
			return;
		}

		DateTime horaDeSalidaUTC = new DateTime(gameManager.UltimoAccesoTicks, DateTimeKind.Utc);
		TimeSpan tiempoTranscurrido = horaDeRegresoUTC - horaDeSalidaUTC;

		if (tiempoTranscurrido.TotalSeconds <= 0)
		{
			return;
		}

		// *** Lógica para calcular recargas basadas en el tiempo transcurrido desde la SALIDA ***

		// 1. Calcular cuánto tiempo queda entre la HORA OBJETIVO GUARDADA y la hora de REGRESO
		DateTime targetTime = new DateTime(ProximaRecargaTicks, DateTimeKind.Utc);
		TimeSpan tiempoDesdeTarget = horaDeRegresoUTC - targetTime;

		// 2. Si tiempoDesdeTarget es positivo, ya debería haber ocurrido al menos una recarga.
		if (tiempoDesdeTarget.TotalSeconds > 0)
		{
			double segundosPasadosDesdeTarget = tiempoDesdeTarget.TotalSeconds;
			int recargasGanadas = 1 + (int)(segundosPasadosDesdeTarget / gameManager.TIEMPO_RECARGA_SECS);

			int energiaRecargada = Mathf.Min(recargasGanadas, gameManager.MAX_ENERGIA - gameManager.EnergiaActual);
			gameManager.EnergiaActual += energiaRecargada;

			// 3. Establecer el nuevo ProximaRecargaTicks
			// Se calcula el tiempo residual y se añade a la hora de regreso (horaDeRegresoUTC)
			double segundosResiduales = segundosPasadosDesdeTarget % gameManager.TIEMPO_RECARGA_SECS;
			double tiempoRestanteNextRecarga = gameManager.TIEMPO_RECARGA_SECS - segundosResiduales;

			ProximaRecargaTicks = horaDeRegresoUTC.AddSeconds(tiempoRestanteNextRecarga).Ticks;
		}
		// Si no, el ProximaRecargaTicks sigue siendo el guardado, no hay cambios en energía.

		Debug.Log($"Recarga Offline. Energía Recargada: {gameManager.EnergiaActual}.");
	}

	void OnApplicationPause(bool pause)
	{
		if (pause)
		{
			GuardarEstado();
		}
		else
		{
			if (timeManager != null)
			{
				timeManager.GetCurrentUTCTime();
			}
		}
	}

	void OnApplicationQuit()
	{
		GuardarEstado();
	}

	private void GuardarEstado()
	{
		long horaSalidaTicks = DateTime.UtcNow.Ticks;

		PlayerPrefs.SetInt(gameManager.LLAVE_ENERGIA, gameManager.EnergiaActual);
		PlayerPrefs.SetString(gameManager.LLAVE_ACCESO, horaSalidaTicks.ToString());

		// GUARDAR HORA DE LA PRÓXIMA RECARGA (CRÍTICO)
		PlayerPrefs.SetString(LLAVE_RECARGA_TICKS, ProximaRecargaTicks.ToString());

		PlayerPrefs.Save();
	}

	// ------------------------------------------------------------------------------------------
	// === Lógica de Recarga (Online) y Gasto ===
	// ------------------------------------------------------------------------------------------

	private void ReiniciarRecargaEnJuego()
	{
		// Detiene solo la corrutina de recarga (el contador ahora usa Update)
		if (recargaCoroutine != null)
		{
			StopCoroutine(recargaCoroutine);
			recargaCoroutine = null;
		}

		if (gameManager.EnergiaActual < gameManager.MAX_ENERGIA)
		{
			// Si la hora objetivo es 0 o ya pasó, la establecemos ahora
			if (ProximaRecargaTicks == 0 || ProximaRecargaTicks < DateTime.UtcNow.Ticks)
			{
				ProximaRecargaTicks = DateTime.UtcNow.AddSeconds(gameManager.TIEMPO_RECARGA_SECS).Ticks;
			}

			// La recarga se basa en la hora objetivo guardada/calculada.
			recargaCoroutine = StartCoroutine(RecargaEnJuegoCoroutine());
		}
		else
		{
			ProximaRecargaTicks = 0; // Si está lleno, resetea la hora objetivo
			segundosRestantesRecarga = 0;
		}
	}

	private IEnumerator RecargaEnJuegoCoroutine()
	{
		while (gameManager.EnergiaActual < gameManager.MAX_ENERGIA)
		{
			DateTime targetTime = new DateTime(ProximaRecargaTicks, DateTimeKind.Utc);
			TimeSpan timeToWait = targetTime - DateTime.UtcNow;

			if (timeToWait.TotalSeconds > 0)
			{
				// Espera el tiempo restante basado en la hora UTC objetivo
				yield return new WaitForSeconds((float)timeToWait.TotalSeconds);
			}

			// Si la energía aún no está llena (puede haber recargas manuales)
			if (gameManager.EnergiaActual < gameManager.MAX_ENERGIA)
			{
				gameManager.EnergiaActual++;
				GuardarEstado(); // Guarda la nueva energía

				Debug.Log($"Energía recargada en juego. Nueva energía: {gameManager.EnergiaActual}");

				// Establece la hora objetivo para la siguiente recarga completa
				ProximaRecargaTicks = DateTime.UtcNow.AddSeconds(gameManager.TIEMPO_RECARGA_SECS).Ticks;
			}
		}

		// Si sale del loop (energía llena)
		recargaCoroutine = null;
		ProximaRecargaTicks = 0;
	}


	public bool GastarEnergia()
	{
		if (gameManager.EnergiaActual > 0)
		{
			// Usamos una variable temporal para chequear el estado ANTES de gastar
			bool estabaLLeno = IsEnergyFull();

			gameManager.EnergiaActual--;

			// 1. Guarda el estado inmediatamente (CRÍTICO para evitar el bug 6/6)
			GuardarEstado();

			// 2. LÓGICA CLAVE: Solo reinicia el temporizador si la energía estaba llena (6/6).
			// Si estaba recargando (ej: 5/6), no tocamos ProximaRecargaTicks.
			if (estabaLLeno)
			{
				// Establece la hora objetivo para la nueva recarga completa
				ProximaRecargaTicks = DateTime.UtcNow.AddSeconds(gameManager.TIEMPO_RECARGA_SECS).Ticks;
			}

			// 3. Reinicia la corrutina para asegurar que la espera empiece/continúe.
			ReiniciarRecargaEnJuego();

			return true;
		}
		else
		{
			Debug.Log("No hay suficiente energía para gastar.");
			return false;
		}
	}

	public void AddEnergy(int i)
	{
		int oldEnergy = gameManager.EnergiaActual;
		gameManager.EnergiaActual = Math.Clamp(gameManager.EnergiaActual + i, 0, gameManager.MAX_ENERGIA);

		if (gameManager.EnergiaActual != oldEnergy)
		{
			// Si se añade energía, guardamos y verificamos si llegamos al máximo
			GuardarEstado();
			ReiniciarRecargaEnJuego();
		}
	}

	// ------------------------------------------------------------------------------------------
	// === Métodos Públicos para la UI ===
	// ------------------------------------------------------------------------------------------

	/// <summary>
	/// Método público para obtener los segundos restantes (usar en UI).
	/// </summary>
	public int GetSegundosRestantes()
	{
		return segundosRestantesRecarga;
	}

	/// <summary>
	/// Devuelve verdadero si la energía está al máximo.
	/// </summary>
	public bool IsEnergyFull()
	{
		return gameManager.EnergiaActual >= gameManager.MAX_ENERGIA;
	}

	// Método para obtener el valor actual de energía
	public int GetEnergyActual()
	{
		return gameManager.EnergiaActual;
	}

	// Método para obtener el valor máximo de energía
	public int GetMaxEnergy()
	{
		return gameManager.MAX_ENERGIA;
	}
}