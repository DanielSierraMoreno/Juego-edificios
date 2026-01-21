using UnityEngine;
using GooglePlayGames.BasicApi;
using TMPro;
using System.Linq;
using System.Collections;

public class RankingUI : MonoBehaviour
{
	// --- Referencias de la UI (Asignar en el Inspector de Unity) ---
	[Header("Top 5 Leaderboard UI")]
	public TMP_Text[] topNameTexts = new TMP_Text[5];
	public TMP_Text[] topScoreTexts = new TMP_Text[5];

	[Header("User's Rank UI")]
	public TMP_Text userRankText;
	public TMP_Text userNameText;
	public TMP_Text userScoreText;

	private Ranking connector;

	// ----------------------------------------------------
	// 1. INICIALIZACIÓN Y SUSCRIPCIÓN
	// ----------------------------------------------------

	void Start()
	{
		connector = Ranking.Instance;

		if (connector == null)
		{
			Debug.LogError("GPGSConnector no está inicializado. Asegúrate de que está en la escena y se carga primero.");
			UpdateUI(false);
			return;
		}

		// Nos suscribimos para recibir los datos cuando estén listos
		connector.OnRankingDataLoaded += HandleRankingDataLoaded;

		// Esperamos a que el GameDataManager (si lo usas) esté listo, y luego autenticamos
		StartCoroutine(WaitForGameReadyAndAuthenticate());
	}

	private IEnumerator WaitForGameReadyAndAuthenticate()
	{
		// Espera a que el sistema de guardado esté listo (si usas GameDataManager)
		while (GameDataManager.Instance == null || !GameDataManager.IsReady)
		{
			yield return null;
		}

		// Inicia la autenticación GPGS
		connector.InitializeAndAuthenticate((status) =>
		{
			if (status == SignInStatus.Success)
			{
				// Subir la puntuación al inicio (si la hay)
				SubmitLocalHighScore();
				// Cargar el ranking para mostrarlo
				connector.LoadRankingData();
			}
			else
			{
				Debug.LogError($"Fallo en la autenticación GPGS. Estado: {status}");
				UpdateUI(false);
			}
		});
	}

	void OnDestroy()
	{
		if (connector != null)
		{
			connector.OnRankingDataLoaded -= HandleRankingDataLoaded;
		}
	}

	// ----------------------------------------------------
	// 2. MANEJO DE DATOS Y ACTUALIZACIÓN DE UI
	// ----------------------------------------------------

	private void HandleRankingDataLoaded(LeaderboardScoreData topData, LeaderboardScoreData userData)
	{
		UpdateUI(topData.Status == ResponseStatus.Success);
	}

	private void UpdateUI(bool success)
	{
		// Obtener datos del Singleton (usa los datos cacheádos)
		var topEntries = connector.GetTopEntries();
		var userEntry = connector.GetUserEntry();

		// Actualizar el nombre del usuario
		userNameText.text = connector.GetUserName();

		if (success)
		{
			// Limpiar y poblar el TOP 5
			for (int i = 0; i < 5; i++)
			{
				if (i < topEntries.Count)
				{
					topNameTexts[i].text = topEntries[i].displayName;
					topScoreTexts[i].text = topEntries[i].score.ToString("N0");
				}
				else
				{
					topNameTexts[i].text = "--";
					topScoreTexts[i].text = "0";
				}
			}

			// Poblar la información del usuario
			userRankText.text = userEntry.rank;
			userScoreText.text = userEntry.score.ToString("N0");
		}
		else
		{
			// Mostrar estado de error
			foreach (var t in topNameTexts.Concat(topScoreTexts).Concat(new[] { userRankText, userScoreText }))
			{
				t.text = "--";
			}
		}
	}

	// ----------------------------------------------------
	// 3. ENVIAR PUNTUACIÓN (Llamar al Singleton)
	// ----------------------------------------------------

	private void SubmitLocalHighScore()
	{
		// ?? CAMBIA ESTA LÍNEA para obtener el HighScore de tu GameDataManager
		long localHighScore = (long)GameDataManager.Instance.GetInt("TotalRecordProgress", 0);

		if (localHighScore > 0)
		{
			// La lógica de si es un nuevo récord la maneja GPGS, solo enviamos el valor.
			connector.SubmitScore(localHighScore);
		}
	}


}