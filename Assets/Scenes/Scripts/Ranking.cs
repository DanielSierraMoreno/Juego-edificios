using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using System.Collections.Generic;
using System;
using System.Threading.Tasks;

public class Ranking : MonoBehaviour
{
	public static Ranking Instance { get; private set; }

	// ?? CRÍTICO: REEMPLAZA CON TU ID DE RANKING REAL
	public const string LEADERBOARD_ID = "CgkI2szg-MgdEAIQBQ";

	public bool IsAuthenticated => PlayGamesPlatform.Instance.IsAuthenticated();

	// Evento que se dispara al finalizar la carga del ranking
	public event Action<LeaderboardScoreData, LeaderboardScoreData> OnRankingDataLoaded;

	// --- Estructura y Datos Internos para cachear ---
	public class RankingEntry
	{
		public string rank;
		public string displayName;
		public long score;
	}

	private List<RankingEntry> topEntriesCache = new List<RankingEntry>();
	private RankingEntry userEntryCache = new RankingEntry();
	private bool isLeaderboardLoading = false;

	// ----------------------------------------------------
	// 1. INICIALIZACIÓN Y AUTENTICACIÓN
	// ----------------------------------------------------

	void Awake()
	{
		if (Instance != null)
		{
			Destroy(gameObject);
			return;
		}
		Instance = this;
		DontDestroyOnLoad(gameObject);
	}

	public void InitializeAndAuthenticate(Action<SignInStatus> callback)
	{
		// 1. Inicializa la plataforma GPGS si no lo has hecho en GameDataManager
		if (!PlayGamesPlatform.Instance.IsAuthenticated())
		{
			PlayGamesPlatform.Activate();
			// AÑADIDO: Comprobar activación
			if (PlayGamesPlatform.Instance == null)
			{
				Debug.LogError("AÑADIDO: Fallo CRÍTICO al activar PlayGamesPlatform.");
			}
		}

		if (IsAuthenticated)
		{
			callback?.Invoke(SignInStatus.Success);
			return;
		}

		// 2. Inicia la autenticación
		PlayGamesPlatform.Instance.Authenticate((status) =>
		{
			if (status != SignInStatus.Success)
			{
				Debug.LogError($"AÑADIDO: Fallo en la autenticación. Estado: {status}");
			}
			callback?.Invoke(status);
		});
	}

	// ----------------------------------------------------
	// 2. ENVÍO DE PUNTUACIÓN
	// ----------------------------------------------------
	public void ShowLeaderboardUI()
	{
		if (!IsAuthenticated)
		{
			// AÑADIDO: Error si intenta mostrar la UI sin estar autenticado
			Debug.LogError("AÑADIDO: No se puede mostrar la UI de Leaderboard. Usuario no autenticado.");
			return;
		}

		// El método ShowLeaderboardUI() de PlayGamesPlatform muestra la interfaz nativa de Google.
		// Solo necesita el ID del marcador que quieres mostrar.
		PlayGamesPlatform.Instance.ShowLeaderboardUI(LEADERBOARD_ID);
	}
	public void SubmitScore(long score)
	{
		if (!IsAuthenticated)
		{
			Debug.LogWarning("Usuario no autenticado. Intentando autenticar de nuevo.");
			InitializeAndAuthenticate((status) =>
			{
				if (status == SignInStatus.Success) SubmitScore(score);
				else Debug.LogError("Fallo en autenticación para enviar puntuación.");
			});
			return;
		}

		if (string.IsNullOrEmpty(LEADERBOARD_ID) || LEADERBOARD_ID.Contains("REEMPLAZA"))
		{
			Debug.LogError("AÑADIDO: LEADERBOARD_ID no configurado correctamente. ¡Revisa la constante!");
			return;
		}

		PlayGamesPlatform.Instance.ReportScore(score, LEADERBOARD_ID, (success) =>
		{
			if (success)
			{
				Debug.Log($"Puntuación ({score}) enviada. Recargando ranking.");
				LoadRankingData(); // Recarga la clasificación después de un envío exitoso
			}
			else
			{
				Debug.LogError("Fallo al enviar la puntuación.");
			}
		});
	}

	// ----------------------------------------------------
	// 3. DESCARGA DE DATOS
	// ----------------------------------------------------

	public void LoadRankingData()
	{
		if (!IsAuthenticated)
		{
			// AÑADIDO: Error si intenta cargar datos sin autenticación
			Debug.LogError("AÑADIDO: No se pueden cargar los datos del ranking. Usuario no autenticado.");
			return;
		}

		if (isLeaderboardLoading)
		{
			Debug.LogWarning("AÑADIDO: Intento de LoadRankingData mientras ya está cargando. Cancelado.");
			return;
		}

		if (string.IsNullOrEmpty(LEADERBOARD_ID) || LEADERBOARD_ID.Contains("REEMPLAZA"))
		{
			Debug.LogError("AÑADIDO: LEADERBOARD_ID no configurado correctamente antes de cargar datos.");
			return;
		}

		isLeaderboardLoading = true;

		// Cargar Top Scores
		PlayGamesPlatform.Instance.LoadScores(
			LEADERBOARD_ID,
			LeaderboardStart.TopScores,
			5, // Siempre cargamos 5 para el Top
			LeaderboardCollection.Public,
			LeaderboardTimeSpan.AllTime,
			(topData) => OnTopScoresLoaded(topData)
		);
	}

	private void OnTopScoresLoaded(LeaderboardScoreData topData)
	{
		if (topData.Status == ResponseStatus.Success)
		{
			topEntriesCache.Clear();
			foreach (IScore score in topData.Scores)
			{
				topEntriesCache.Add(new RankingEntry
				{
					rank = score.rank.ToString(),
					displayName = "Cargando...", // Nombre temporal
					score = score.value
				});
			}

			// AÑADIDO: Error si topData.Scores es null o tiene un conteo inesperado
			if (topData.Scores == null)
			{
				Debug.LogError("AÑADIDO: topData.Scores es null a pesar del éxito.");
			}
			else if (topData.Scores.Length == 0)
			{
				Debug.LogWarning("AÑADIDO: Top Scores cargado con éxito, pero no se encontraron puntuaciones.");
			}

			// Cargar Puntuación del Usuario Actual
			PlayGamesPlatform.Instance.LoadScores(
				LEADERBOARD_ID,
				LeaderboardStart.PlayerCentered,
				1,
				LeaderboardCollection.Public,
				LeaderboardTimeSpan.AllTime,
				(userData) => OnUserScoreLoaded(topData, userData) // Pasamos topData
			);
		}
		else
		{
			isLeaderboardLoading = false;
			Debug.LogError("Error al cargar Top Scores: " + topData.Status);
			// Si falla la carga del top, notificar error o datos vacíos a la UI
			OnRankingDataLoaded?.Invoke(topData, null);
		}
	}

	private void OnUserScoreLoaded(LeaderboardScoreData topData, LeaderboardScoreData userData)
	{
		// AÑADIDO: Error si falla la carga del usuario
		if (userData.Status != ResponseStatus.Success)
		{
			Debug.LogError("AÑADIDO: Error al cargar User Score: " + userData.Status);
		}

		isLeaderboardLoading = false;

		// Cargar datos del usuario
		if (userData.Status == ResponseStatus.Success && userData.Scores.Length > 0)
		{
			IScore score = userData.PlayerScore;
			userEntryCache = new RankingEntry
			{
				rank = score.rank.ToString(),
				displayName = "Cargando...",
				score = score.value
			};
		}
		else
		{
			// Si falla, al menos intentar obtener el nombre de Play Games Platform.
			string userName = PlayGamesPlatform.Instance.GetUserDisplayName();
			if (string.IsNullOrEmpty(userName))
			{
				userName = "Invitado/Desconocido"; // AÑADIDO: Más específico
			}
			userEntryCache = new RankingEntry { displayName = userName, rank = "--", score = 0 };

			if (userData.Scores.Length == 0)
			{
				Debug.LogWarning("AÑADIDO: El usuario no tiene puntuación en este ranking.");
			}
		}

		// Cargar Nombres de Usuarios (Proceso asíncrono)
		CargarNombresDeUsuarios(topData.Scores, userData.Scores, topData, userData);

		// Notificamos a la UI que los datos principales están listos (los nombres llegarán después)
		// Usaremos los datos originales de LoadScores para que la UI pueda procesarlos si quiere.
	}

	// ----------------------------------------------------
	// 4. CARGA DE NOMBRES (ASÍNCRONO)
	// ----------------------------------------------------

	// Dentro de Ranking.cs

	// ----------------------------------------------------
	// 4. CARGA DE NOMBRES (ASÍNCRONO)
	// ----------------------------------------------------

	// CAMBIO CLAVE: Cambiar de async void a void (ya que no usamos await)
	private void CargarNombresDeUsuarios(IScore[] topScores, IScore[] userScores, LeaderboardScoreData topData, LeaderboardScoreData userData)
	{
		if (!IsAuthenticated)
		{
			Debug.LogError("AÑADIDO: Intento de cargar nombres sin estar autenticado.");
			return;
		}

		// Recolectar todos los userIDs necesarios
		List<string> userIds = new List<string>();
		// AÑADIDO: Comprobación de seguridad
		if (topScores != null)
		{
			foreach (var score in topScores)
			{
				// AÑADIDO: Comprobar que el ID no sea nulo/vacío
				if (!string.IsNullOrEmpty(score.userID))
				{
					userIds.Add(score.userID);
				}
				else
				{
					Debug.LogError("AÑADIDO: Score con userID nulo o vacío encontrado.");
				}
			}
		}


		if (userIds.Count == 0)
		{
			Debug.LogWarning("AÑADIDO: No hay userIDs válidos para cargar nombres.");
			return;
		}

		// ?? LLAMADA SEGURA: Ejecutar LoadUsers directamente en el hilo principal.
		PlayGamesPlatform.Instance.LoadUsers(userIds.ToArray(), (users) =>
		{
			if (users != null)
			{
				// Mapear userIDs a DisplayNames (el resto del callback es correcto)
				int i = 0;
				foreach (var user in users)
				{
					// AÑADIDO: Evitar IDs nulos en el mapa.
					if (!string.IsNullOrEmpty(user.id))
					{
						topEntriesCache[i].displayName = user.userName;
						i++;
						Debug.LogError("AÑADIDO");

					}
					else
					{
						Debug.LogError("AÑADIDO: Usuario devuelto por LoadUsers con ID nulo.");
					}
				}

				OnRankingDataLoaded?.Invoke(topData, userData);

				// Opcional: Disparar un evento aquí si la UI necesita saber que los nombres llegaron.
				// OnRankingNamesUpdated?.Invoke(); 
			}
			else
			{
				// AÑADIDO: Error al recibir el array de usuarios
				Debug.LogError("Error al cargar nombres de usuario. Array de usuarios es NULL.");
			}
		});
	}

	// ----------------------------------------------------
	// 5. ACCESO A DATOS CACHEADOS
	// ----------------------------------------------------

	public List<RankingEntry> GetTopEntries() => topEntriesCache;
	public RankingEntry GetUserEntry() => userEntryCache;
	public string GetUserName() => PlayGamesPlatform.Instance.GetUserDisplayName() ?? "Invitado";
}