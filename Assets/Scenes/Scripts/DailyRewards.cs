using UnityEngine;
using TMPro;
using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine.SceneManagement; // ¡NECESARIO para cambiar de escena!

public class DailyRewards : MonoBehaviour
{
	private const string IS_FIRST_LAUNCH_KEY = "IsFirstLaunch";
	private const string LEVEL_ONE_SCENE_NAME = "Level 1"; // Asegúrate de que este nombre coincida EXACTAMENTE con tu escena.

	private const string LAST_REWARD_DATE_KEY = "LastDailyRewardDate";

	[Header("Referencias UI y GameObjects")]
	[Tooltip("Asigna 7 GameObjects, uno para cada día (Lunes a Domingo).")]
	public List<GameObject> dayRewardObjects = new List<GameObject>(7);
	public TMP_Text rewardAmountText;

	[Header("Datos de Recompensa")]
	[Tooltip("Cantidades de recompensa en orden: Lunes, Martes, Miércoles, Jueves, Viernes, Sábado, Domingo.")]
	public List<int> rewardAmounts = new List<int> { 100, 150, 100, 200, 300, 500, 1000 };

	private TimeManager timeManager;

	void Start()
	{
		// ===============================================
		// LÓGICA DE PRIMER INICIO (FIRST LAUNCH)
		// ===============================================

		// Comprueba si la clave 'IsFirstLaunch' existe y su valor es 0 (valor por defecto).
		if (PlayerPrefs.GetInt(IS_FIRST_LAUNCH_KEY, 0) == 0)
		{
			Debug.Log("Primera vez que se inicia el juego. Saltando recompensas y cargando Level 1...");

			// 1. Marcar el juego como ya iniciado (estableciendo el valor a 1)

			// 2. Cargar la escena Level 1 inmediatamente.
			SceneManager.LoadScene(LEVEL_ONE_SCENE_NAME);

			// 3. Detener la ejecución de la función Start() aquí.
			return;
		}

		// ====================================================================
		// LÓGICA DE RECOMPENSAS DIARIAS (SOLO SI YA HA JUGADO ANTERIORMENTE)
		// ====================================================================

		// 1. Ocultar el GameObject Inmediatamente. 
		if (gameObject.activeSelf)
		{
			gameObject.SetActive(false);
		}

		// 2. Buscar el TimeManager (Singleton)
		timeManager = FindObjectOfType<TimeManager>();

		if (timeManager == null)
		{
			Debug.LogError("TimeManager no encontrado.");
			return;
		}

		// 3. Suscribirse al evento y solicitar la hora para iniciar la verificación.
		timeManager.OnTimeReceived += OnTimeReceivedFromServer;
		timeManager.GetCurrentUTCTime();
	}

	/// <summary>
	/// Se llama automáticamente cuando el TimeManager recibe la hora segura del servidor.
	/// </summary>
	private void OnTimeReceivedFromServer(DateTime serverTimeUTC)
	{
		// Desuscribirse para evitar llamadas futuras innecesarias.
		timeManager.OnTimeReceived -= OnTimeReceivedFromServer;

		// Convertir la hora UTC a la hora local del jugador
		DateTime todayLocal = TimeZoneInfo.ConvertTimeFromUtc(serverTimeUTC, TimeZoneInfo.Local);

		CheckDailyReward(todayLocal);
	}

	/// <summary>
	/// Verifica si el jugador puede reclamar la recompensa diaria.
	/// </summary>
	private void CheckDailyReward(DateTime today)
	{
		string todayString = today.Date.ToString("yyyy-MM-dd");
		string lastRewardDateString = PlayerPrefs.GetString(LAST_REWARD_DATE_KEY, string.Empty);

		int dayIndex = GetDayIndex(today.DayOfWeek);

		// 1. Configurar la UI con los datos del día actual
		ConfigureRewardUI(dayIndex);

		// 2. Comprobar si la recompensa ya fue reclamada hoy
		if (lastRewardDateString == todayString)
		{
			Debug.Log($"Recompensa diaria para {today.DayOfWeek} ya reclamada hoy.");
			return;
		}

		// --- LÓGICA DE RECOMPENSA: DÍA NUEVO ---

		// 3. Activar el GameObject para mostrar la ventana de recompensa
		gameObject.SetActive(true);

		// 4. Otorgar la recompensa
		int rewardAmount = rewardAmounts[dayIndex];
		GrantReward(rewardAmount);

		// 5. Guardar la fecha de hoy como la última fecha de recompensa
		PlayerPrefs.SetString(LAST_REWARD_DATE_KEY, todayString);
		PlayerPrefs.Save();

		Debug.Log($"¡Recompensa diaria disponible y reclamada de {today.DayOfWeek}! Cantidad: {rewardAmount}");
	}

	/// <summary>
	/// Mapea el enum DayOfWeek de C# a un índice de array (0=Lunes, 6=Domingo).
	/// </summary>
	private int GetDayIndex(DayOfWeek day)
	{
		if (day == DayOfWeek.Sunday)
		{
			return 6;
		}
		else
		{
			return (int)day - 1;
		}
	}

	/// <summary>
	/// Configura el GameObject y el texto para el día de la semana actual.
	/// </summary>
	private void ConfigureRewardUI(int dayIndex)
	{
		if (dayIndex >= 0 && dayIndex < dayRewardObjects.Count)
		{
			// 1. Reactivar todos los GameObjects para empezar de cero
			foreach (var obj in dayRewardObjects)
			{
				if (obj != null) obj.SetActive(true);
			}

			// 2. Desactivar el GameObject del día actual (según tu requerimiento)
			if (dayRewardObjects[dayIndex] != null)
			{
				dayRewardObjects[dayIndex].SetActive(false);
			}
		}

		// 3. Mostrar el valor de la recompensa para el día actual
		if (rewardAmountText != null && dayIndex < rewardAmounts.Count)
		{
			int rewardAmount = rewardAmounts[dayIndex];
			rewardAmountText.text = rewardAmount.ToString();
		}
	}

	/// <summary>
	/// Lógica para añadir la recompensa al inventario/moneda del jugador.
	/// </summary>
	private void GrantReward(int amount)
	{
		int batteryCharges = PlayerPrefs.GetInt("CargasBateria", 0);
		batteryCharges += amount;
		PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo", 0) + amount);

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("CargasBateria", batteryCharges);

		// ?? REEMPLAZA ESTO con tu lógica real de juego
		Debug.Log($"Recompensa otorgada: {amount} de la moneda principal.");
	}

	/// <summary>
	/// Método público para vincular a un botón "Cerrar" o "Reclamar" en la UI.
	/// </summary>
	public void HideRewardUI()
	{
		if (gameObject.activeSelf)
		{
			gameObject.SetActive(false);
		}
	}
}