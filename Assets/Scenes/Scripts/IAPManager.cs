using UnityEngine;
using UnityEngine.Purchasing;
using System.Collections.Generic;
using System.Collections; // Necesario para HashSet

public class IAPManager : MonoBehaviour, IStoreListener
{
	public static IAPManager Instance;

	// --- 1. DEFINICIÓN DE PRODUCTOS ---
	public static string PRODUCT_ENERGY_50 = "com.vidid.shape_shift_puzzle.energy50";
	public static string PRODUCT_ENERGY_100 = "com.vidid.shape_shift_puzzle.energy100";
	public static string PRODUCT_UNDO_50 = "com.vidid.shape_shift_puzzle.undo50";
	public static string PRODUCT_UNDO_100 = "com.vidid.shape_shift_puzzle.undo100";
	public static string PRODUCT_REMOVE_ADS = "com.vidid.shape_shift_puzzle.removeads";

	private static IStoreController m_StoreController;
	private static IExtensionProvider m_StoreExtensionProvider;

	// Lista para evitar el doble otorgamiento de recursos en la misma sesión
	private static HashSet<string> s_ConfirmedTransactions = new HashSet<string>();

	void Start()
	{
		// Inicia el proceso de espera en lugar de la lógica inmediata.
		StartCoroutine(ExecuteLogicWhenReady());
	}

	IEnumerator ExecuteLogicWhenReady()
	{
		// Espera hasta que el GameDataManager confirme que la carga asíncrona ha terminado.
		while (GameDataManager.Instance == null || !GameDataManager.IsReady)
		{
			yield return null;
		}
		if (Instance != null) { Destroy(gameObject); yield return null; }
		Instance = this;
		DontDestroyOnLoad(gameObject);
		if (m_StoreController == null) { InitializePurchasing(); }
	}

	void InitializePurchasing()
	{
		var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
		builder.AddProduct(PRODUCT_ENERGY_50, ProductType.Consumable);
		builder.AddProduct(PRODUCT_ENERGY_100, ProductType.Consumable);
		builder.AddProduct(PRODUCT_UNDO_50, ProductType.Consumable);
		builder.AddProduct(PRODUCT_UNDO_100, ProductType.Consumable);
		builder.AddProduct(PRODUCT_REMOVE_ADS, ProductType.NonConsumable);
		UnityPurchasing.Initialize(this, builder);
	}

	private bool IsInitialized() => m_StoreController != null && m_StoreExtensionProvider != null;

	// --- 2. CALLBACKS DE INICIALIZACIÓN Y ERRORES ---

	public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
	{
		Debug.Log("✅ Unity IAP inicializado.");
		m_StoreController = controller;
		m_StoreExtensionProvider = extensions;
	}
	public void OnInitializeFailed(InitializationFailureReason error)
	{
		Debug.LogError($"❌ Fallo al inicializar IAP. Razón: {error}");
	}
	// Utiliza la firma que tu compilador exigió
	public void OnInitializeFailed(InitializationFailureReason error, string message)
	{
		Debug.LogError($"❌ Fallo al inicializar IAP. Razón: {error}. Mensaje: {message}");
	}

	public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
	{
		Debug.LogError($"❌ Fallo en {product.definition.id}: {failureReason}");
	}

	// --- 3. FUNCIONES DE COMPRA (LLAMADAS DE UI) ---

	public void Buy50EnergyProduct() => BuyProductID(PRODUCT_ENERGY_50);
	public void Buy100EnergyProduct() => BuyProductID(PRODUCT_ENERGY_100);
	public void Buy50UndoProduct() => BuyProductID(PRODUCT_UNDO_50);
	public void Buy100UndoProduct() => BuyProductID(PRODUCT_UNDO_100);
	public void BuyNoAdsProduct() => BuyProductID(PRODUCT_REMOVE_ADS);

	void BuyProductID(string productId)
	{
		if (IsInitialized())
		{
			Product product = m_StoreController.products.WithID(productId);
			if (product != null && product.availableToPurchase)
			{
				m_StoreController.InitiatePurchase(product);
			}
		}
	}

	// --- 4. PROCESAMIENTO DE LA COMPRA (PATRÓN PENDING/CONFIRM) ---

	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
	{
		string productId = args.purchasedProduct.definition.id;

		// 1. NON-CONSUMABLE: Se procesa y se confirma inmediatamente.
		if (string.Equals(productId, PRODUCT_REMOVE_ADS))
		{
			AdsConfiguration.Instance.BuyNoAds();
			return PurchaseProcessingResult.Complete;
		}

		// 2. CONSUMABLES: Se procesan como PENDIENTES para la garantía de entrega.
		else if (productId.StartsWith("com.vidid.shape_shift_puzzle."))
		{
			FulfillPurchase(args.purchasedProduct); // Inicia el proceso de entrega
			return PurchaseProcessingResult.Pending; // Obliga a la tienda a reintentar
		}

		// 3. DESCONOCIDO: Se marca como COMPLETO para limpiar la cola.
		return PurchaseProcessingResult.Complete;
	}

	// --- 5. FUNCIÓN DE ENTREGA GARANTIZADA ---

	void FulfillPurchase(Product product)
	{
		string productId = product.definition.id;

		// 1. CHEQUEO DE IDEMPOTENCIA: Si ya se procesó en esta sesión, salimos.
		if (s_ConfirmedTransactions.Contains(product.transactionID))
		{
			m_StoreController.ConfirmPendingPurchase(product);
			Debug.LogWarning($"Transacción ya entregada ({productId}). Ignorando reintento.");
			return;
		}

		try
		{
			// LÓGICA DE OTORGAMIENTO (llama al AdsConfiguration)
			if (string.Equals(productId, PRODUCT_ENERGY_50)) { AdsConfiguration.Instance.Buy50Energy(); }
			else if (string.Equals(productId, PRODUCT_ENERGY_100)) { AdsConfiguration.Instance.Buy100Energy(); }
			else if (string.Equals(productId, PRODUCT_UNDO_50)) { AdsConfiguration.Instance.Buy50Undo(); }
			else if (string.Equals(productId, PRODUCT_UNDO_100)) { AdsConfiguration.Instance.Buy100Undo(); }

			// 2. ÉXITO: Marcamos como entregado y confirmamos con la tienda.
			s_ConfirmedTransactions.Add(product.transactionID);
			m_StoreController.ConfirmPendingPurchase(product);
			Debug.Log($"🎉 Compra entregada y confirmada: {productId}");
		}
		catch (System.Exception ex)
		{
			// 3. FALLO: NO CONFIRMAMOS. La transacción queda PENDIENTE para un reintento.
			Debug.LogError($"ERROR: Fallo al otorgar recurso {productId}. Producto sigue PENDIENTE. {ex.Message}");
		}
	}

	// --- 6. RESTAURAR COMPRAS ---

	public void RestorePurchases()
	{
		if (IsInitialized())
		{
#if UNITY_IOS || UNITY_STANDALONE_OSX
            m_StoreExtensionProvider.GetExtension<IAppleExtensions>().RestoreTransactions((result) => {
                Debug.Log("Compras restauradas: " + result);
            });
#else
			Debug.LogWarning("La restauración manual solo aplica a iOS/macOS.");
#endif
		}
	}
}