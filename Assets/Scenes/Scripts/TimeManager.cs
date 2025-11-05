using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System;
using System.Globalization; // Asegúrate de incluir esta librería

public class BypassCertificateHandler : CertificateHandler
{
	// Esto permite que la conexión SSL se complete sin validar el certificado.
	protected override bool ValidateCertificate(byte[] certificateData)
	{
		return true;
	}
}

public class TimeManager : MonoBehaviour
{
	private const string TIME_API_URL = "https://cloudflare.com/cdn-cgi/trace";
	public Action<DateTime> OnTimeReceived;

	// ?? NUEVA VARIABLE: Almacena la última hora UTC conocida y válida.
	private DateTime lastKnownTimeUTC = DateTime.MinValue;

	// --------------------------------------------------------------------------------
	// === Propiedad de Acceso Público ===
	// --------------------------------------------------------------------------------

	/// <summary>
	/// Devuelve la última hora UTC obtenida del servidor.
	/// Utiliza DateTime.UtcNow si nunca se ha recibido una hora válida.
	/// </summary>
	public DateTime LastKnownTimeUTC
	{
		get
		{
			// Si no tenemos una hora conocida, usamos la hora actual del dispositivo como fallback.
			return (lastKnownTimeUTC != DateTime.MinValue) ? lastKnownTimeUTC : DateTime.UtcNow;
		}
	}

	// --------------------------------------------------------------------------------

	void Start()
	{
		DontDestroyOnLoad(this.gameObject);
	}

	public void GetCurrentUTCTime()
	{
		StartCoroutine(FetchTimeCoroutine());
	}

	private IEnumerator FetchTimeCoroutine()
	{
		BypassCertificateHandler certificateHandler = new BypassCertificateHandler();

		using (UnityWebRequest webRequest = UnityWebRequest.Get(TIME_API_URL))
		{
			webRequest.certificateHandler = certificateHandler;
			yield return webRequest.SendWebRequest();

			if (webRequest.result == UnityWebRequest.Result.Success)
			{
				DateTime receivedTime = DateTime.UtcNow; // Fallback inicial en caso de fallo de parsing
				bool success = false;

				try
				{
					string rawResponse = webRequest.downloadHandler.text;
					string[] lines = rawResponse.Split('\n');

					long unixTimeSeconds = 0;
					bool found = false;

					foreach (string line in lines)
					{
						if (line.StartsWith("ts="))
						{
							string tsValue = line.Substring(3);

							if (double.TryParse(tsValue, NumberStyles.Any, CultureInfo.InvariantCulture, out double fullTime))
							{
								unixTimeSeconds = (long)fullTime;
								found = true;
								break;
							}
						}
					}

					if (found)
					{
						receivedTime = DateTimeOffset.FromUnixTimeSeconds(unixTimeSeconds).UtcDateTime;
						success = true;
					}
					else
					{
						Debug.LogError("Fallo al encontrar la clave 'ts=' en la respuesta. Usando hora local.");
					}
				}
				catch (Exception e)
				{
					Debug.LogError("Fallo al procesar la respuesta: " + e.Message + ". Usando hora local.");
				}

				// ?? ACTUALIZACIÓN CLAVE: Si la recepción fue exitosa, guardamos la hora.
				if (success)
				{
					lastKnownTimeUTC = receivedTime;
					OnTimeReceived?.Invoke(lastKnownTimeUTC);
				}
				else
				{
					// Si falló, notificamos con la última hora conocida (o la local si no hay ninguna)
					OnTimeReceived?.Invoke(LastKnownTimeUTC);
				}
			}
			else
			{
				Debug.LogError("Error de red final: " + webRequest.error + ". Usando última hora conocida.");
				// Si falla la red, notificamos con la última hora conocida.
				OnTimeReceived?.Invoke(LastKnownTimeUTC);
			}
		}
	}
}