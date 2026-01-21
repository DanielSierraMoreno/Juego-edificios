using UnityEngine;
using System.Collections.Generic;
using System;
using System.IO;
using System.Threading.Tasks;
using GooglePlayGames; // Necesario
using GooglePlayGames.BasicApi;
using Unity.Services.Core;
using System.Collections; // Necesario					   // Añade el using para tu clase de gestión de nube
						  // using CloudSaveServiceManager; // Reemplazar si usaste otro nombre para el script de nube.

// -----------------------------------------------------------------

public class GameDataManager : MonoBehaviour
{
	public static GameDataManager Instance { get; private set; }

	// Constantes de guardado
	private const string SAVE_FILE_NAME = "game_save.json";
	private string SAVE_PATH;

	// Caché interno de datos (RAM)
	private Dictionary<string, int> _intDataCache = new Dictionary<string, int>();
	private Dictionary<string, string> _stringDataCache = new Dictionary<string, string>();
	private Dictionary<string, float> _floatDataCache = new Dictionary<string, float>();
	public static bool IsReady { get; private set; } = false;

	async void Awake() // <-- ¡AHORA ES ASÍNCRONO!
	{
		if (Instance != null) { Destroy(gameObject); return; }
		Instance = this;
		DontDestroyOnLoad(gameObject);


		StartCoroutine(WaitForGameReadyAndAuthenticate());
	}
	async void StartGame()
	{


		SAVE_PATH = Path.Combine(Application.persistentDataPath, SAVE_FILE_NAME);

		string googleAuthCode = await GPGSAuthenticator.SignInAndGetAuthCodeAsync();

		try
		{
			await UnityServices.InitializeAsync();
		}
		catch (Exception e)
		{
			Debug.LogError($"❌ Fallo al inicializar Unity Services: {e.Message}");
		}

		// 1. Inicializar UGS y autenticar (necesario antes de cualquier carga)
		await Cloud.InitializeAndAuthenticateAsync(googleAuthCode);

		// 2. Determinar si es la primera vez que se carga en este dispositivo

		// Si no hay archivo local, intenta cargar la nube y fusionar los datos
		await AttemptCloudLoadAndMerge();

		// 3. Cargar datos locales (serán los de la nube si el merge fue exitoso, o por defecto)
		LoadDataLocal();
		IsReady = true;
	}
	private IEnumerator WaitForGameReadyAndAuthenticate()
	{
		// Espera a que el sistema de guardado esté listo (si usas GameDataManager)
		while (NetworkChecker.Instance == null || !NetworkChecker.Instance.isConnected)
		{
			yield return null;
		}

		// Inicia la autenticación GPGS

		StartGame();

	}

	private async Task WaitForNetwork()
	{
		// 🚨 Advertencia: Debes cambiar 'NetworkChecker.Instance' si no es un Singleton con 'Instance'.
		if (NetworkChecker.Instance == null)
		{
			Debug.LogError("NetworkChecker Singleton no encontrado. La comprobación de red no funcionará.");
			return;
		}

		while (!NetworkChecker.Instance.HasRequiredConnection())
		{
			Debug.LogWarning("Esperando conexión de red antes de iniciar la autenticación...");
			// Espera 1 segundo. Usa Task.Delay para ser compatible con async/await.
			await Task.Delay(1000);
		}

		Debug.Log("Conexión de red activa. Continuando con la autenticación de servicios.");
	}

	// =================================================================
	// 3 & 4. MÉTODOS DE LECTURA (GET) y ESCRITURA (SET)
	// =================================================================
	#region MetodosGetSet
	// ... (Métodos GetInt, GetString, GetFloat se mantienen iguales) ...
	// ... (Omisión de Getters y Setters para brevedad) ...

	public int GetInt(string key, int defaultValue)
	{
		if (_intDataCache.TryGetValue(key, out int value)) { return value; }
		return defaultValue;
	}
	public int GetInt(string key) => GetInt(key, 0);
	public string GetString(string key, string defaultValue)
	{
		if (_stringDataCache.TryGetValue(key, out string value)) { return value; }
		return defaultValue;
	}
	public string GetString(string key) => GetString(key, string.Empty);
	public float GetFloat(string key, float defaultValue)
	{
		if (_floatDataCache.TryGetValue(key, out float value)) { return value; }
		return defaultValue;
	}
	public float GetFloat(string key) => GetFloat(key, 0f);


	public async void SetInt(string key, int value) // <-- AHORA ES ASÍNCRONO
	{
		_intDataCache[key] = value;
		await SaveData();
	}

	public async void SetString(string key, string value) // <-- AHORA ES ASÍNCRONO
	{
		_stringDataCache[key] = value;
		await SaveData();
	}

	public async void SetFloat(string key, float value) // <-- AHORA ES ASÍNCRONO
	{
		_floatDataCache[key] = value;
		await SaveData();
	}
	#endregion


	// =================================================================
	// 5. MÉTODOS DE PERSISTENCIA (JSON Y NUBE)
	// =================================================================

	/// <summary>
	/// Guarda todo: Localmente y en la nube.
	/// </summary>
	private async Task SaveData() // <-- AHORA ES Task
	{
		try
		{
			ProgressSaveData data = new ProgressSaveData();

			// Empaquetar todos los datos
			foreach (var kvp in _intDataCache) { data.intKeys.Add(kvp.Key); data.intValues.Add(kvp.Value); }
			foreach (var kvp in _stringDataCache) { data.stringKeys.Add(kvp.Key); data.stringValues.Add(kvp.Value); }
			foreach (var kvp in _floatDataCache) { data.floatKeys.Add(kvp.Key); data.floatValues.Add(kvp.Value); }

			string jsonString = JsonUtility.ToJson(data);

			// 1. Guardado LOCAL
			File.WriteAllText(SAVE_PATH, jsonString);
			Debug.Log($"💾 Datos guardados Localmente. Ubicación: {SAVE_PATH}");

			// 2. Guardado en la NUBE (Llamando al gestor externo 'Cloud')
			await Cloud.SaveDataToCloudAsync(jsonString);

		}
		catch (Exception ex)
		{
			Debug.LogError($"❌ Fallo al guardar datos: {ex.Message}");
		}
	}

	/// <summary>
	/// Carga datos LOCALES (o los de la nube si se pasaron al Awake)
	/// </summary>
	private void LoadDataLocal(string jsonString = null)
	{
		// Si no se pasó un JSON de la nube, intenta cargar el archivo local
		if (jsonString == null && File.Exists(SAVE_PATH))
		{
			jsonString = File.ReadAllText(SAVE_PATH);
		}

		if (jsonString == null)
		{
			Debug.Log("💾 No hay datos para cargar. Inicializando por defecto.");
			return; // Inicializa con cachés vacíos
		}

		try
		{
			ProgressSaveData data = JsonUtility.FromJson<ProgressSaveData>(jsonString);

			// Desempaquetar los datos
			_intDataCache.Clear(); _stringDataCache.Clear(); _floatDataCache.Clear();
			for (int i = 0; i < data.intKeys.Count; i++) _intDataCache.Add(data.intKeys[i], data.intValues[i]);
			for (int i = 0; i < data.stringKeys.Count; i++) _stringDataCache.Add(data.stringKeys[i], data.stringValues[i]);
			for (int i = 0; i < data.floatKeys.Count; i++) _floatDataCache.Add(data.floatKeys[i], data.floatValues[i]);

			int totalEntries = _intDataCache.Count + _stringDataCache.Count + _floatDataCache.Count;
			Debug.Log($"💾 Datos cargados ({totalEntries} entradas) desde el disco.");
		}
		catch (Exception ex)
		{
			Debug.LogError($"❌ Fallo al cargar/deserializar datos: {ex.Message}");
			// En caso de fallo, reinicia los cachés
			_intDataCache = new Dictionary<string, int>();
			_stringDataCache = new Dictionary<string, string>();
			_floatDataCache = new Dictionary<string, float>();
		}
	}


	/// <summary>
	/// Intenta descargar el JSON de la nube (solo si es el primer lanzamiento) y sobrescribe local.
	/// </summary>
	private async Task AttemptCloudLoadAndMerge()
	{
		Debug.Log("Intentando cargar datos desde la nube...");

		// 1. INTENTO DE CARGA DE LA NUBE
		string jsonFromCloud = await Cloud.LoadDataFromCloudAsync();

		if (jsonFromCloud != null)
		{
			// Caso A: ÉXITO. El nuevo usuario (B) tiene datos en la nube. Cargar estos.
			Debug.Log("Cloud Save encontrado para el usuario actual. Cargando datos de la nube.");
			LoadDataLocal(jsonFromCloud);
			// Sobrescribir el archivo local con la versión de la nube (datos de B)
			await SaveData();
		}
		else
		{
			// Caso B: NO HAY DATOS DE LA NUBE PARA ESTE USUARIO (B).
			// Si el archivo local existe, es basura de un usuario anterior (A).
			if (File.Exists(SAVE_PATH))
			{
				Debug.LogWarning("No hay Cloud Save para este usuario. Eliminando guardado local obsoleto.");
				// 🚨 SOLUCIÓN 1: ELIMINAR EL ARCHIVO LOCAL ANTIGUO
				File.Delete(SAVE_PATH);
				// El juego ahora cargará valores por defecto en LoadDataLocal().
			}
		}
	}
}

// --- 1. CLASE DE ESTRUCTURA JSON (PARA SERIALIZACIÓN) ---
[System.Serializable]
public class ProgressSaveData
{
	public List<string> intKeys = new List<string>();
	public List<int> intValues = new List<int>();
	public List<string> stringKeys = new List<string>();
	public List<string> stringValues = new List<string>();
	public List<string> floatKeys = new List<string>();
	public List<float> floatValues = new List<float>();
}

public static class GPGSAuthenticator
{
	public static Task<string> SignInAndGetAuthCodeAsync()
	{
		var tcs = new TaskCompletionSource<string>();

		// 1. Iniciar la autenticación GPGS
		PlayGamesPlatform.Instance.ManuallyAuthenticate((SignInStatus status) =>
		{
			if (status == SignInStatus.Success)
			{
				// 2. Solicitud del Server Auth Code usando la firma de un solo parámetro que funciona en tu plugin
				PlayGamesPlatform.Instance.RequestServerSideAccess(false,  (string code) =>
				{
					if (!string.IsNullOrEmpty(code)) // Comprobar si el código no es nulo/vacío
					{
						Debug.Log($"GPGS: Server Auth Code obtenido para UGS. {code}");
						tcs.SetResult(code);
					}
					else
					{
						Debug.LogError($"GPGS: Server Auth Code devuelto es nulo o vacío. {code}");
						tcs.SetResult(null);
					}
				});
			}
			else
			{
				Debug.LogError($"GPGS: Fallo en la autenticación. Status: {status}");
				tcs.SetResult(null);
			}
		});

		return tcs.Task;
	}
}