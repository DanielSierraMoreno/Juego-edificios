using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class ManagerPlayer : MonoBehaviour
{
	[Header("-------------------------------LEVEL GOALS-------------------------------")]

	public float TimerGoal = 15;

	public int MovementsGoal = 10;


	[Header("-------------------------------FINAL BUTTONS-------------------------------")]

	public List<CheckNewModules> pieces;

	[Header("-------------------------------PAINT NUMBER CONDITION-------------------------------")]



	//-------------------PAINT-------------------------
	public int toPaint = 0;

	public int currentPaint = 0;

	[Header("-------------------------------CONNECT NUMBER CONDITION-------------------------------")]

	//---------------CONNECT------------------------

	public int connect = 0;

	public int connectGoal = 5;

	[Header("-------------------------------OTHERS-------------------------------")]

	public bool checkEnd = false;
	public bool pause = false;

	public UnityEvent evento;

	public UnityEvent eventoMuerte;


	public float levelTimer = -1;

	public int actualMovements = 0;







	public TMP_Text levelGlobalTimer, levelGlobbalMovements, levelTimerResult, levelMovementsResult, levelTimerGoal, levelMovementsGoal, levelName;
	public static ManagerPlayer Instance { get; private set; }

	LevelConditions levelConditions;

	public TMP_Text undoMove;

	public UnityEvent undoEmpty;
	private void Awake()
	{
		levelConditions = FindObjectOfType<LevelConditions>();
		if (Instance != null && Instance != this)
		{
			// Si ya existe una instancia y no es esta, destruye esta copia.
			Destroy(gameObject);
			return;
		}

		Instance = this;
		// Opcional: Para mantener el objeto vivo entre escenas.
		// DontDestroyOnLoad(gameObject);
	}

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
		levelTimer = -1;


	}

    // Update is called once per frame
    void Update()
    {
		if(undoMove != null)
			undoMove.text = PlayerPrefs.GetInt("Undo", 5).ToString();

		if (!checkEnd && !pause)
		{
			levelTimer += Time.deltaTime;
		}

		levelName.text = SceneManager.GetActiveScene().name;
		levelTimerGoal.text = TimerGoal.ToString() + ",00 s";
		levelMovementsGoal.text = MovementsGoal.ToString();
		levelGlobalTimer.text = Math.Clamp(levelTimer, 0, 999).ToString("F2");
		levelGlobbalMovements.text = actualMovements.ToString();
		levelTimerResult.text = Math.Clamp(levelTimer, 0, 999).ToString("F2") + " s";
		levelMovementsResult.text = actualMovements.ToString();


		if(levelTimer <= TimerGoal)
		{
			levelTimerResult.color = Color.green;
		}
        else
        {
			levelTimerResult.color = Color.red;
		}

		if (actualMovements <= MovementsGoal)
		{
			levelMovementsResult.color = Color.green;
		}
		else
		{
			levelMovementsResult.color = Color.red;
		}

	}

    public void CheckEnd()
    {
		if (!checkEnd)
		{
			switch(levelConditions.conditions)
			{
				case LevelConditions.Conditions.BUTTONS:

					int count = 0;

					for (int i = 0; i < pieces.Count; i++)
					{
						if (pieces[i].pieces.Count != 0)
						{
							count++;
						}
					}


					if (count == pieces.Count)
					{
						checkEnd = true;
						evento.Invoke();
						PlayerController.Instance.enabled = false;
					}


					break;
				case LevelConditions.Conditions.PAINT:

					if(currentPaint >= toPaint)
					{
						checkEnd = true;
						evento.Invoke();
						PlayerController.Instance.enabled = false;
					}
					break;
				case LevelConditions.Conditions.CONNECT:

					if (connect >= connectGoal)
					{
						checkEnd = true;
						evento.Invoke();
						PlayerController.Instance.enabled = false;
					}
					break;

			}








		}
	}
	public void SetPause(bool i)
	{
		pause = i;
	}
    public void NextLevel()
    {
		Scene currentScene = SceneManager.GetActiveScene();
		string currentName = currentScene.name; // Ejemplo: "Level 1"

		// 1. Usa Regex para encontrar el número en el nombre de la escena
		Match match = Regex.Match(currentName, @"\d+"); // Busca uno o más dígitos

		if (match.Success)
		{
			// 2. Extrae el número actual, lo convierte a entero y lo incrementa
			if (int.TryParse(match.Value, out int currentLevelNumber))
			{
				int nextLevelNumber = currentLevelNumber + 1;

				// 3. Reemplaza el número antiguo con el nuevo en el nombre de la escena
				// Ejemplo: Cambia "Level 1" por "Level 2"
				string nextSceneName = Regex.Replace(currentName, @"\d+", nextLevelNumber.ToString());

				// 4. Comprueba si esa escena existe y la carga
				// **IMPORTANTE:** La siguiente escena debe existir en Build Settings con el nombre exacto.
				try
				{
					if (FindObjectOfType<EnergyManager>().gameManager.EnergiaActual != 0)
					{
						FindObjectOfType<UIConfirmLevel>().level = nextSceneName;
						FindObjectOfType<UIConfirmLevel>().Show();
					}
					else
					{
						FindObjectsOfType<UIEnergyShop>().FirstOrDefault(t => t.energyShop).Show();
					}


				}
				catch (Exception e)
				{
					// Manejo si la escena no existe (ej. es el último nivel)
					Debug.LogWarning($"No se pudo cargar la escena: {nextSceneName}. Probablemente has completado todos los niveles o hay un error en el nombre.");
					// Opcional: Cargar un menú principal o pantalla de finalización
					// SceneManager.LoadScene("MainMenu"); 
				}
			}
		}
		else
		{
			Debug.LogError($"La escena actual '{currentName}' no sigue el patrón esperado (Ej: Level 1). No se pudo encontrar un número.");
		}
	}

	public void ResetLevel()
	{
		if (FindObjectOfType<EnergyManager>().gameManager.EnergiaActual != 0)
		{
			FindObjectOfType<UIConfirmLevel>().level = SceneManager.GetActiveScene().name;
			FindObjectOfType<UIConfirmLevel>().Show();
		}
		else
		{
			FindObjectsOfType<UIEnergyShop>().FirstOrDefault(t => t.energyShop).Show();
		}

	}

	public void ReturnMenu()
	{
		if (PlayerPrefs.GetInt("IsFirstLaunch", 0) == 0)
		{
			PlayerPrefs.SetInt("IsFirstLaunch", 1);
			PlayerPrefs.Save();

		}

		FindObjectOfType<LoadingUI>().LoadScene("LevelSelector");
	}

	public void Dead(Collider other)
	{
		if(PlayerController.Instance.isGrounded)
		{
			return;
		}
		other.enabled = false;

		checkEnd = true;
		eventoMuerte.Invoke();

		PlayerController.Instance.stop = true;

		GameObject newEmptyGameObject = new GameObject("New_Tracking_Target");
		newEmptyGameObject.transform.position = PlayerController.Instance.cam.Target.TrackingTarget.transform.position;

		PlayerController.Instance.cam.Target.TrackingTarget = newEmptyGameObject.transform;

		FindObjectOfType<AdsManager>().IncreaseAdCount(1);

	}
	public void InstantDead(Collider other)
	{

		other.enabled = false;

		checkEnd = true;
		eventoMuerte.Invoke();

		PlayerController.Instance.stop = true;

		GameObject newEmptyGameObject = new GameObject("New_Tracking_Target");
		newEmptyGameObject.transform.position = PlayerController.Instance.cam.Target.TrackingTarget.transform.position;

		PlayerController.Instance.cam.Target.TrackingTarget = newEmptyGameObject.transform;

		FindObjectOfType<AdsManager>().IncreaseAdCount(1);

	}

	public void ResetMovement()
	{
		if (checkEnd)
			return;

		if(PlayerPrefs.GetInt("Undo", 5) > 0)
		{
			if (!PlayerController.Instance.ResetMove && PlayerController.Instance.historialMovimientos.Count != 0 && PlayerController.Instance.CanMove)
			{
				PlayerController.Instance.ResetingMove();
				PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo", 5) - 1);
			}
		}
		else
		{
			undoEmpty.Invoke();
		}

	}
}
