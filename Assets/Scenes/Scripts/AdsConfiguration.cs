using UnityEngine;
using UnityEngine.Advertisements;

public class AdsConfiguration : MonoBehaviour,
	IUnityAdsInitializationListener,
	IUnityAdsLoadListener,
	IUnityAdsShowListener
{
	// --- 1. SINGLETON Y CONSTANTES ---

	public static AdsConfiguration Instance { get; private set; }

	private const string NO_ADS_KEY = "NoAds";

	[Header("Interstitial Configuration")]
	public int AdCountToShowAd = 6;

	// --- 2. CONFIGURACIÓN DE ID's DE UNITY ADS (¡REEMPLAZAR!) ---

	[Header("Unity Ads Game IDs")]
	// 🔑 REEMPLAZA CON LOS ID's OBTENIDOS DEL UNITY DASHBOARD
	private string androidGameId = "5994939";
	private string iosGameId = "5994938";
	private string gameId = "5994939";

	[Header("Unity Ads Unit IDs")]
	public string interstitialId = "Interstitial_Android";

	// 🎯 NUEVOS IDs DE RECOMPENSA SEPARADOS
	public string rewardedEnergyId = "RewardedEnergy";
	public string rewardedUndoId = "RewardedUndo";

	public bool isTestMode = false;

	// --- 3. CICLO DE VIDA Y STARTUP ---

	void Awake()
	{
		// Implementación Singleton
		if (Instance != null && Instance != this)
		{
			Destroy(gameObject);
			return;
		}

		Instance = this;
		DontDestroyOnLoad(gameObject);

		InitializeSDK();
	}

	private void InitializeSDK()
	{
//#if UNITY_ANDROID
//		gameId = androidGameId;
//#elif UNITY_IOS
//		gameId = iosGameId;
//#else
//		gameId = androidGameId;
//#endif

		Debug.Log("Initializing Unity Ads...");
		Advertisement.Initialize(gameId, isTestMode, this);
	}


	// --- 5. FUNCIONALIDAD DE ADS (MUESTRA Y CARGA) ---

	public void ShowInterstitial()
	{
		// ¡Intentamos mostrar directamente!
		Advertisement.Show(interstitialId, this);
	}

	public void ShowAdForEnergy()
	{
		// ¡Intentamos mostrar directamente!
		Advertisement.Show(rewardedEnergyId, new RewardedCustomListener(this, RewardType.Energy));
	}

	public void ShowAdForUndo()
	{
		// ¡Intentamos mostrar directamente!
		Advertisement.Show(rewardedUndoId, new RewardedCustomListener(this, RewardType.Undo));
	}

	// Funciones de Carga Específicas
	public void LoadInterstitialAd() => Advertisement.Load(interstitialId, this);
	public void LoadRewardedAdEnergy() => Advertisement.Load(rewardedEnergyId, this);
	public void LoadRewardedAdUndo() => Advertisement.Load(rewardedUndoId, this);


	// --- 6. LÓGICA DE RECOMPENSA Y IAP ---

	// Hacemos el enum público para que la clase externa RewardedCustomListener pueda acceder a él.
	public enum RewardType { Energy, Undo }

	public void GrantReward(RewardType type)
	{
		if (type == RewardType.Energy)
		{
			int charges = GameDataManager.Instance.GetInt("CargasBateria", 5);
			charges += 5;
			GameDataManager.Instance.SetInt("CargasBateria", charges);
			Debug.Log("🎉 RECOMPENSA: 5 ENERGÍA OTORGADA!");
		}
		else if (type == RewardType.Undo)
		{
			int charges = GameDataManager.Instance.GetInt("Undo", 5);
			charges += 3;
			GameDataManager.Instance.SetInt("Undo", charges);
			Debug.Log("🎉 RECOMPENSA: 3 UNDO OTORGADA!");
		}
	}

	public void BuyNoAds()
	{
		GameDataManager.Instance.SetInt(NO_ADS_KEY, 1);
		Debug.Log("🚫 Anuncios Deshabilitados por IAP.");
	}
	public void Buy50Energy()
	{
		int batteryCharges = GameDataManager.Instance.GetInt("CargasBateria", 5);
		batteryCharges += 50;

		// 2. Guardar las nuevas cargas
		GameDataManager.Instance.SetInt("CargasBateria", batteryCharges);
	}

	public void Buy100Energy()
	{
		int batteryCharges = GameDataManager.Instance.GetInt("CargasBateria", 5);
		batteryCharges += 100;

		// 2. Guardar las nuevas cargas
		GameDataManager.Instance.SetInt("CargasBateria", batteryCharges);
	}

	public void Buy50Undo()
	{
		int UndoCharges = GameDataManager.Instance.GetInt("Undo", 5);
		UndoCharges += 50;

		// 2. Guardar las nuevas cargas
		GameDataManager.Instance.SetInt("Undo", UndoCharges);
	}

	public void Buy100Undo()
	{
		int UndoCharges = GameDataManager.Instance.GetInt("Undo", 5);
		UndoCharges += 100;

		// 2. Guardar las nuevas cargas
		GameDataManager.Instance.SetInt("Undo", UndoCharges);
	}
	// --- 7. LISTENERS OBLIGATORIOS DEL SDK DE UNITY ADS ---

	public void OnInitializationComplete()
	{
		Debug.Log("✅ Unity Ads Inicializado. Cargando unidades...");
		LoadInterstitialAd();
		LoadRewardedAdEnergy(); // Cargamos ambos al inicio
		LoadRewardedAdUndo();   // Cargamos ambos al inicio
	}
	public void OnInitializationFailed(UnityAdsInitializationError error, string message)
	{
		Debug.LogError($"Ads Init Falló: {message}");
	}

	public void OnUnityAdsAdLoaded(string adUnitId)
	{
		Debug.Log($"Ad Loaded: {adUnitId}");
	}
	public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
	{
		Debug.LogError($"Ad Load Falló para {adUnitId}: {message}");
	}

	public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
	{
		if (adUnitId.Equals(interstitialId))
		{
			LoadInterstitialAd();
		}
		// Nota: Las recargas de los rewarded ads se manejan dentro de RewardedCustomListener
	}

	public void OnUnityAdsShowStart(string adUnitId) { }
	public void OnUnityAdsShowClick(string adUnitId) { }
	public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message) { }
}

// --- CLASE DE GESTIÓN DE RECOMPENSAS ESPECÍFICAS (Listener Personalizado) ---

public class RewardedCustomListener : IUnityAdsShowListener
{
	private AdsConfiguration manager;
	private AdsConfiguration.RewardType rewardType;

	public RewardedCustomListener(AdsConfiguration adsManager, AdsConfiguration.RewardType type)
	{
		this.manager = adsManager;
		this.rewardType = type;
	}

	public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
	{
		if (showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		{
			manager.GrantReward(rewardType);
		}

		// Recargamos el rewarded ad específico después de que se cierra
		if (adUnitId.Equals(manager.rewardedEnergyId))
		{
			manager.LoadRewardedAdEnergy();
		}
		else if (adUnitId.Equals(manager.rewardedUndoId))
		{
			manager.LoadRewardedAdUndo();
		}
	}

	public void OnUnityAdsShowStart(string adUnitId) { }
	public void OnUnityAdsShowClick(string adUnitId) { }
	public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message) { }





}