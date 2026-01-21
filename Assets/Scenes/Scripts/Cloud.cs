using System;
using System.Threading.Tasks;
using UnityEngine;
using System.Collections.Generic;
using Unity.Services.Core;
using Unity.Services.Authentication;
using Unity.Services.CloudSave;
using Unity.Services.CloudSave.Models; // Necesario para el tipo Item

public static class Cloud
{
	private const string CLOUD_SAVE_KEY = "GameDataJson";

	// Bandera de estado
	public static bool IsInitializedAndSignedIn { get; private set; } = false;

	// Bandera de bloqueo para evitar llamadas simultáneas a SignIn
	private static bool isAuthenticating = false;

	/// <summary>
	/// Inicializa Unity Gaming Services (UGS) y autentica al usuario.
	/// </summary>
	public static async Task InitializeAndAuthenticateAsync(string googleAuthCode)
	{
		if (IsInitializedAndSignedIn || isAuthenticating) return;
		isAuthenticating = true;

		if(string.IsNullOrEmpty(googleAuthCode))
		{
			return;
		}

		try
		{
			// Nota: Asumimos que UnityServices.InitializeAsync() ya se llamó en GameDataManager

			// --- 1. INTENTAR AUTENTICACIÓN PERSISTENTE CON GOOGLE ---
			if (!AuthenticationService.Instance.IsSignedIn)
			{
				try
				{
					// Usa el código de Google para vincular el ID de UGS.
					await AuthenticationService.Instance.SignInWithGooglePlayGamesAsync(googleAuthCode);
					Debug.Log("👤 UGS: Vinculación con Google EXITOSA (Guardado persistente asegurado).");
				}
				catch (AuthenticationException ex)
				{
					Debug.LogError($"UGS ERROR: Fallo al intentar SignInWithGoogle. Detalles: {ex.Message} Nombre: {googleAuthCode}");
				}
			}
			else
			{
				try
				{
					// Usa el código de Google para vincular el ID de UGS.
					await AuthenticationService.Instance.LinkWithGooglePlayGamesAsync(googleAuthCode);
					Debug.Log("👤 UGS: Vinculación con Google EXITOSA (Guardado persistente asegurado).");
				}
				catch (AuthenticationException ex)
				{
					Debug.LogError($"UGS ERROR: Fallo al intentar SignInWithGoogle. Detalles: {ex.Message} Nombre: {googleAuthCode}");
				}
			}

			IsInitializedAndSignedIn = true;
		}
		catch (Exception e)
		{
			Debug.LogError($"❌ Error UGS o Autenticación: {e.Message}");
			IsInitializedAndSignedIn = false;
		}
		finally
		{
			isAuthenticating = false;
		}
	}

	/// <summary>
	/// Sube una cadena JSON a Unity Cloud Save.
	/// </summary>
	public static async Task SaveDataToCloudAsync(string jsonString)
	{
		if (!IsInitializedAndSignedIn)
		{
			// Intenta inicializar de nuevo y espera a que termine
			if (!IsInitializedAndSignedIn)
			{
				Debug.LogError("❌ Cloud Save NO está disponible después del reintento. Guardado en la nube cancelado.");
				return;
			}
		}

		try
		{
			var dataToSave = new Dictionary<string, object> { { CLOUD_SAVE_KEY, jsonString } };
			await CloudSaveService.Instance.Data.Player.SaveAsync(dataToSave);
			Debug.Log("☁️ Datos guardados en Unity Cloud Save.");
		}
		catch (Exception e)
		{
			Debug.LogError($"❌ Fallo al guardar en la nube: {e.Message}");
		}
	}

	/// <summary>
	/// Descarga la cadena JSON de Unity Cloud Save.
	/// </summary>
	public static async Task<string> LoadDataFromCloudAsync()
	{
		if (!IsInitializedAndSignedIn)
		{
			if (!IsInitializedAndSignedIn) return null;
		}

		try
		{
			var loadedData = await CloudSaveService.Instance.Data.Player.LoadAsync(new HashSet<string> { CLOUD_SAVE_KEY });

			Unity.Services.CloudSave.Models.Item cloudItem;

			if (loadedData.TryGetValue(CLOUD_SAVE_KEY, out cloudItem))
			{
				// CORRECCIÓN FINAL: Usamos Convert.ToString para manejar el tipo object
				string jsonFromCloud = cloudItem.Value.GetAs<string>();

				if (!string.IsNullOrEmpty(jsonFromCloud))
				{
					Debug.Log("☁️ Datos cargados desde Unity Cloud Save.");
					return jsonFromCloud;
				}
			}

			Debug.Log("☁️ La clave de guardado en la nube está vacía o el valor es nulo.");
			return null;
		}
		catch (Exception e)
		{
			Debug.LogError($"❌ Fallo al cargar datos de la nube: {e.Message}");
			return null;
		}
	}
}