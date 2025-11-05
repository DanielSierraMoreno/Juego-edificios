using UnityEngine;
using UnityEngine.Audio; // ¡NECESARIO para AudioMixer!
using TMPro;
using UnityEngine.UI; // Necesario para TextMeshPro

public class Configuracion : MonoBehaviour
{
	// --- Implementación del Singleton ---
	public static Configuracion Instance { get; private set; }

	// --- Referencias del Audio Mixer (Asignar en Inspector) ---
	[Header("Ajustes de Audio")]
	public AudioMixer masterMixer;

	// Nombres de los parámetros EXPUESTOS en el Audio Mixer. ¡Deben coincidir!
	private const string MUSIC_PARAM = "MusicVolume";
	private const string SFX_PARAM = "SFXVolume";

	// --- Referencias de Notificaciones ---
	// NOTA: Para las notificaciones reales (push), necesitarías plugins específicos (ej. Unity Mobile Notifications)
	// Esto solo gestiona el estado en el juego.
	[Header("Ajustes de Notificaciones")]
	[Tooltip("El estado actual de las notificaciones (Activado/Desactivado).")]
	public bool alertsEnabled = true;
	public Slider sliderMusic, sliderSFX;

	public GameObject muteMusic, muteSFX;

	public Toggle notifications;
	private void Awake()
	{
		if (Instance != null && Instance != this)
		{
			Destroy(this.gameObject);
		}
		else
		{
			Instance = this;
			DontDestroyOnLoad(this.gameObject);

			CargarAjustes();
			CargarVolumenes();
		}
	}

	// ==========================================================
	//                        GESTIÓN DE AUDIO
	// ==========================================================

	/// <summary>
	/// Convierte el valor lineal (0 a 1) a Decibelios (dB) y lo aplica al grupo de Música.
	/// </summary>
	public void SetMusicVolume(float sliderValue)
	{
		// El Mathf.Log10(0) causa errores, así que usamos un valor mínimo.
		float volume = (sliderValue > 0.0001f) ? Mathf.Log10(sliderValue) * 20 : -80f;
		
		
		sliderMusic.value = sliderValue;


		masterMixer.SetFloat(MUSIC_PARAM, volume);
		PlayerPrefs.SetFloat(MUSIC_PARAM, sliderValue);
		PlayerPrefs.Save();

		if (sliderValue > 0)
			muteMusic.SetActive(false);
		else
			muteMusic.SetActive(true);
	}
	public void SetMusicVolume()
	{
		float sliderValue = sliderMusic.value;
		// El Mathf.Log10(0) causa errores, así que usamos un valor mínimo.
		float volume = (sliderValue > 0.0001f) ? Mathf.Log10(sliderValue) * 20 : -80f;


		sliderMusic.value = sliderValue;


		masterMixer.SetFloat(MUSIC_PARAM, volume);
		PlayerPrefs.SetFloat(MUSIC_PARAM, sliderValue);
		PlayerPrefs.Save();

		if (sliderValue > 0)
			muteMusic.SetActive(false);
		else
			muteMusic.SetActive(true);
	}
	/// <summary>
	/// Convierte el valor lineal (0 a 1) a Decibelios (dB) y lo aplica al grupo de SFX.
	/// </summary>
	public void SetSFXVolume(float sliderValue)
	{
		float volume = (sliderValue > 0.0001f) ? Mathf.Log10(sliderValue) * 20 : -80f;
		sliderSFX.value = sliderValue;

		masterMixer.SetFloat(SFX_PARAM, volume);
		PlayerPrefs.SetFloat(SFX_PARAM, sliderValue);
		PlayerPrefs.Save();

		if(sliderValue > 0)
			muteSFX.SetActive(false);
		else
			muteSFX.SetActive(true);


	}

	public void SetSFXVolume()
	{

		float sliderValue = sliderSFX.value;

		float volume = (sliderValue > 0.0001f) ? Mathf.Log10(sliderValue) * 20 : -80f;
		sliderSFX.value = sliderValue;

		masterMixer.SetFloat(SFX_PARAM, volume);
		PlayerPrefs.SetFloat(SFX_PARAM, sliderValue);
		PlayerPrefs.Save();

		if (sliderValue > 0)
			muteSFX.SetActive(false);
		else
			muteSFX.SetActive(true);


	}

	public void CargarVolumenes()
	{
		float musicVol = PlayerPrefs.GetFloat(MUSIC_PARAM, 1f); // Por defecto: 1 (Máximo)
		float sfxVol = PlayerPrefs.GetFloat(SFX_PARAM, 1f);

		sliderSFX.value = sfxVol;
		sliderMusic.value = musicVol;

		if(musicVol == 0)
			muteMusic.SetActive(true);

		if (sfxVol == 0)
			muteSFX.SetActive(true);

		// Aplica el valor guardado (esto llama a SetFloat en el Mixer)
		SetMusicVolume(musicVol);
		SetSFXVolume(sfxVol);
	}

	public void SetMuteMusic()
	{
		if(PlayerPrefs.GetFloat(MUSIC_PARAM, 1f) > 0)
		{
			muteMusic.SetActive(true);
			SetMusicVolume(0);

			sliderMusic.value = 0;
		}
		else
		{
			muteMusic.SetActive(false);
			SetMusicVolume(1);

			sliderMusic.value = 1;
		}

	}

	public void SetMuteSFX()
	{
		if (PlayerPrefs.GetFloat(SFX_PARAM, 1f) > 0)
		{
			muteSFX.SetActive(true);
			SetSFXVolume(0);

			sliderSFX.value = 0;
		}
		else
		{
			muteSFX.SetActive(false);
			SetSFXVolume(1);

			sliderSFX.value = 1;
		}
	}

	// ==========================================================
	//                   GESTIÓN DE NOTIFICACIONES (Alerts)
	// ==========================================================

	/// <summary>
	/// Alterna el estado de las notificaciones. Se enlaza a un botón/toggle.
	/// Nombre corto sugerido para el botón: "Alerts" o "Avisos".
	/// </summary>
	public void ToggleAlerts(bool newValue)
	{
		alertsEnabled = newValue;
		PlayerPrefs.SetInt("AlertsEnabled", alertsEnabled ? 1 : 0);
		PlayerPrefs.Save();

		Debug.Log($"Notificaciones (Alerts) cambiadas a: {alertsEnabled}");

		// Aquí iría la lógica para interactuar con el plugin de notificaciones push
	}

	public void ToggleAlerts()
	{
		alertsEnabled = notifications.isOn;
		PlayerPrefs.SetInt("AlertsEnabled", alertsEnabled ? 1 : 0);
		PlayerPrefs.Save();

		Debug.Log($"Notificaciones (Alerts) cambiadas a: {alertsEnabled}");

		// Aquí iría la lógica para interactuar con el plugin de notificaciones push
	}

	public void CargarAjustes()
	{
		// Carga la configuración de notificaciones
		alertsEnabled = PlayerPrefs.GetInt("AlertsEnabled", 1) == 1; // Por defecto: On

		notifications.isOn = alertsEnabled;
	}
}