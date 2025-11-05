using UnityEngine;
using System;
using System.Globalization;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;

public class Calendario : MonoBehaviour
{
	// --- CONSTANTES ---
	private const int PROGRESSO_COMPLETO = 9; // El valor mínimo de progreso para considerar el día "cumplido" (9 o superior)
	private const string RACHA_KEY = "RachaDiasCompletos";
	private const string ULTIMA_FECHA_RACHA_KEY = "UltimaFechaRacha"; // Para saber si se cumplió ayer
	private const string CARGAS_BATERIA_KEY = "CargasBateria"; // Clave para el total de cargas
															   // Esta clave se usará con un sufijo de fecha (ej: "RewardClaimed_2025-11-03")
	private const string REWARD_CLAIMED_BASE_KEY = "RewardClaimed_";

	// --- Referencias UI ---
	[Tooltip("Asigna el componente TextMeshPro que mostrará la fecha actual (dd/MM/yyyy).")]
	public TextMeshProUGUI dateDisplay;

	[Tooltip("Opcional: Asigna el TextMeshPro para mostrar la racha de días consecutivos.")]
	public TMP_Text streakDisplay;

	[Tooltip("Opcional: Asigna el TextMeshPro para mostrar el total de cargas de batería.")]
	public TMP_Text batteryChargeDisplay;

	// --- Referencias de Sistema ---
	private TimeManager timeManager;
	private DateTime serverTime = DateTime.MinValue; // Almacenará la última fecha válida

	public List<GameObject> days; // La lista de celdas de días del calendario

	public Slider slider;
	public List<Image> stars; // Estrellas del día actual
	public TMP_Text month; // TextMeshPro para el mes y el año

	private int currentStreak = 0; // Almacena el valor de la racha
	private int batteryCharges = 0; // Almacena el valor de las cargas de batería

	public TMP_Text racha;
	public GameObject candado, check;
	public static Calendario Instance { get; private set; }
	void Start()
	{
		timeManager = FindObjectOfType<TimeManager>();
		if (timeManager == null)
		{
			Debug.LogError("TimeManager no encontrado!");
			return;
		}

		// Inicializar los valores desde PlayerPrefs
		batteryCharges = PlayerPrefs.GetInt(CARGAS_BATERIA_KEY, 0);
		UpdateBatteryChargeDisplay();

		// Suscribirse y solicitar la hora al iniciar la escena
		timeManager.OnTimeReceived += SetServerDate;
		timeManager.GetCurrentUTCTime();
	}
	void Awake()
	{
		// 2. Implementar DontDestroyOnLoad
		if (Instance != null && Instance != this)
		{
			Destroy(this.gameObject);
			return;
		}

		Instance = this;
		DontDestroyOnLoad(this.gameObject);
	}
	/// <summary>
	/// Se llama cuando el TimeManager recibe la fecha segura del servidor.
	/// </summary>
	private void SetServerDate(DateTime horaUTC)
	{
		try
		{
			TimeZoneInfo targetZone = TimeZoneInfo.Local;
			serverTime = TimeZoneInfo.ConvertTimeFromUtc(horaUTC, targetZone);

			UpdateCalendarDisplay();
			Show();

			// Solo calcula la racha al inicio del día. La recompensa se gestiona por evento.
			CheckAndUpdateStreak();

		}
		catch (TimeZoneNotFoundException ex)
		{
			Debug.LogError($"Zona horaria no encontrada. Usando hora UTC por defecto. Error: {ex.Message}");
			serverTime = horaUTC;
		}
		catch (InvalidTimeZoneException ex)
		{
			Debug.LogError($"Error en la zona horaria. Usando hora UTC por defecto. Error: {ex.Message}");
			serverTime = horaUTC;
		}

		timeManager.OnTimeReceived -= SetServerDate;
	}

	private void UpdateCalendarDisplay()
	{
		if (dateDisplay != null)
		{
			dateDisplay.text = serverTime.ToString("dd/MM/yyyy");
		}
	}

	void Show()
	{
		int year = serverTime.Year;
		int month = serverTime.Month;

		int daysInMonth = DateTime.DaysInMonth(year, month);
		DateTime firstDayOfMonth = new DateTime(year, month, 1);
		DayOfWeek startDay = firstDayOfMonth.DayOfWeek;
		int startDayInt = 0;

		// Lógica de inicio de semana (asumiendo Lunes=0)
		switch (startDay)
		{
			case DayOfWeek.Tuesday:
				startDayInt = 1;
				break;
			case DayOfWeek.Wednesday:
				startDayInt = 2;
				break;
			case DayOfWeek.Thursday:
				startDayInt = 3;
				break;
			case DayOfWeek.Friday:
				startDayInt = 4;
				break;
			case DayOfWeek.Saturday:
				startDayInt = 5;
				break;
			case DayOfWeek.Sunday:
				startDayInt = 6;
				break;
		}

		// 1. Limpiar/Ocultar todos los días
		for (int i = 0; i < days.Count; i++)
		{
			days[i].SetActive(false);
		}

		// 2. Rellenar los días del mes
		int currentMonthDay = 1;
		for (int i = startDayInt; i < days.Count && currentMonthDay <= daysInMonth; i++)
		{
			days[i].SetActive(true);
			days[i].GetComponentInChildren<TMP_Text>().text = currentMonthDay.ToString();

			days[i].transform.GetChild(0).gameObject.SetActive(false);
			Image targetImage = days[i].transform.GetChild(1).GetComponent<Image>();

			if (serverTime.Day == currentMonthDay)
			{
				days[i].transform.GetChild(0).gameObject.SetActive(true);
				targetImage.color = Color.white;
			}

			// Lógica de progreso para cada día
			int progres = PlayerPrefs.GetInt("Day" + currentMonthDay.ToString() + "Month" + month.ToString() + "Year" + year.ToString() + "Progress", 0);

			// Ocultar y mostrar estrellas
			for (int k = 0; k < 3; k++)
			{
				days[i].transform.GetChild(3).GetChild(k).gameObject.SetActive(false);
			}

			for (int j = 0; j < (int)(progres / 3); j++)
			{
				days[i].transform.GetChild(3).GetChild(j).gameObject.SetActive(true);
			}

			currentMonthDay++;
		}

		// 3. Ajuste de posición
		if (days.Count > 35 && !days[35].activeSelf)
		{
			days[35].transform.parent.parent.localPosition = new Vector3(days[35].transform.parent.parent.localPosition.x, -55, 0);
		}

		// 4. Lógica del Slider y Estrellas para el día actual
		int progressHoy = PlayerPrefs.GetInt("Day" + serverTime.Day.ToString() + "Month" + month.ToString() + "Year" + year.ToString() + "Progress", 0);

		// Ocultar y mostrar estrellas del día actual
		for (int k = 0; k < this.stars.Count; k++)
		{
			this.stars[k].color = Color.gray;
		}

		for (int j = 0; j < (int)(progressHoy / 3); j++)
		{
			this.stars[j].color = Color.white;
		}

		slider.value = progressHoy;

		// 5. Mostrar Mes y Año
		this.month.text = serverTime.ToString("MMMM", CultureInfo.CurrentCulture) + " " + year.ToString();

		racha.text = "X" + PlayerPrefs.GetInt(RACHA_KEY, 1).ToString();

		if(progressHoy >= 9)
		{
			candado.SetActive(false);
			check.SetActive(true);
		}
		else
		{
			candado.SetActive(true);
			check.SetActive(false);
		}
	}

	/// <summary>
	/// SOLO calcula el valor de la racha al inicio del día. NO otorga recompensas.
	/// </summary>
	private void CheckAndUpdateStreak()
	{
		// 1. Obtener los datos almacenados
		currentStreak = PlayerPrefs.GetInt(RACHA_KEY, 1);
		string lastStreakDateString = PlayerPrefs.GetString(ULTIMA_FECHA_RACHA_KEY, string.Empty);

		// 2. Determinar si la racha debe continuar, reiniciarse, o si ya se actualizó hoy
		string todayString = serverTime.Date.ToString("yyyy-MM-dd");

		// Si la última fecha guardada es HOY, la lógica ya se procesó.
		if (lastStreakDateString == todayString)
		{
			UpdateStreakDisplay();
			return;
		}

		// Obtener la fecha de ayer
		DateTime yesterday = serverTime.Date.AddDays(-1);

		// 3. Comprobar el progreso del día de AYER
		string yesterdayProgressKey = $"Day{yesterday.Day}Month{yesterday.Month}Year{yesterday.Year}Progress";
		int yesterdayProgress = PlayerPrefs.GetInt(yesterdayProgressKey, 0);

		// El día se cumple si el progreso es 9 o superior.
		bool yesterdayCompleted = yesterdayProgress >= PROGRESSO_COMPLETO;

		// Comprobamos si la última comprobación fue AYER (es decir, días CONSECUTIVOS)
		if (lastStreakDateString == yesterday.ToString("yyyy-MM-dd"))
		{
			if (yesterdayCompleted)
			{
				// Racha CONSECUTIVA y cumplida. Incrementamos.
				currentStreak++;
			}
			else
			{
				// Racha rota AYER. Reiniciamos.
				currentStreak = 1;
			}
		}
		else
		{
			// Racha anterior rota o primer día.
			if (yesterdayCompleted)
			{
				// Ayer se cumplió, por lo que una NUEVA racha comienza hoy en 1.
				currentStreak = 1;
			}
			else
			{
				// Ayer no se cumplió. La racha es 0.
				currentStreak = 1;
			}
		}

		// 4. Guardar el nuevo valor de la racha y la fecha de HOY como última fecha de comprobación
		PlayerPrefs.SetInt(RACHA_KEY, currentStreak);
		PlayerPrefs.SetString(ULTIMA_FECHA_RACHA_KEY, todayString);
		PlayerPrefs.Save();

		UpdateStreakDisplay();
	}


	/// <summary>
	/// Actualiza el progreso del día actual y comprueba si se debe otorgar la recompensa (Cargas de Batería).
	/// ESTA FUNCIÓN DEBE LLAMARSE CADA VEZ QUE EL USUARIO GANA PROGRESO.
	/// </summary>
	/// <param name="newProgressValue">El nuevo valor de progreso (ej: 3, 6, 9, 10...)</param>
	public void SetProgressAndCheckReward(int newProgressValue)
	{
		// Obtener la información del día actual
		int day = serverTime.Day;
		int month = serverTime.Month;
		int year = serverTime.Year;
		string todayString = serverTime.Date.ToString("yyyy-MM-dd");

		// Claves de PlayerPrefs
		string progressKey = $"Day{day}Month{month}Year{year}Progress";
		string rewardClaimedKey = REWARD_CLAIMED_BASE_KEY + todayString; // Clave única para hoy

		// 1. Obtener el progreso ANTERIOR
		int oldProgress = PlayerPrefs.GetInt(progressKey, 0);

		// 2. Comprobar el estado del objetivo
		bool wasCompletedBefore = oldProgress >= PROGRESSO_COMPLETO;
		bool isCompletedNow = newProgressValue >= PROGRESSO_COMPLETO;

		// 3. Comprobar si la recompensa ya fue entregada hoy
		bool rewardAlreadyClaimed = PlayerPrefs.GetInt(rewardClaimedKey, 0) == 1;


		// =========================================================================
		// LÓGICA DE RECOMPENSA (Activada por evento)
		// =========================================================================

		// Si: 
		// a) El progreso NO había alcanzado 9 antes,
		// Y b) El progreso ALCANZA 9 o más ahora,
		// Y c) La recompensa NO ha sido reclamada hoy.
		if (!wasCompletedBefore && isCompletedNow && !rewardAlreadyClaimed)
		{
			// Obtener el valor de la racha (calculado previamente al inicio del día)
			currentStreak = PlayerPrefs.GetInt(RACHA_KEY, 1);

			// 1. Sumar la racha actual a las cargas de batería
			batteryCharges = PlayerPrefs.GetInt(CARGAS_BATERIA_KEY, 0);
			batteryCharges += currentStreak;

			// 2. Guardar las nuevas cargas
			PlayerPrefs.SetInt(CARGAS_BATERIA_KEY, batteryCharges);

			// 3. Marcar la recompensa como entregada para el día de hoy
			PlayerPrefs.SetInt(rewardClaimedKey, 1);

			Debug.Log($"?? Objetivo cumplido hoy! Ganó {currentStreak} Cargas de Batería.");

			UpdateBatteryChargeDisplay();
		}
		// =========================================================================

		// 4. Guardar el nuevo valor de progreso
		PlayerPrefs.SetInt(progressKey, newProgressValue);
		PlayerPrefs.Save();

		// Opcional: Si quieres que el calendario se actualice inmediatamente (slider, estrellas), llama a Show()
		// Show(); 
	}

	/// <summary>
	/// Actualiza el TextMeshPro con el valor de la racha actual.
	/// </summary>
	private void UpdateStreakDisplay()
	{
		if (streakDisplay != null)
		{
			streakDisplay.text = currentStreak.ToString();
		}
	}

	/// <summary>
	/// Actualiza el TextMeshPro con el valor de las cargas de batería.
	/// </summary>
	private void UpdateBatteryChargeDisplay()
	{
		if (batteryChargeDisplay != null)
		{
			batteryChargeDisplay.text = batteryCharges.ToString();
		}
	}

	// Métodos públicos para obtener datos (existentes)
	public int GetCurrentDay()
	{
		return serverTime.Day;
	}

	public int GetCurrentYear()
	{
		return serverTime.Year;
	}

	public int GetBatteryCharges()
	{
		return batteryCharges;
	}
}