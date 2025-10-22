using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ManagerPlayer : MonoBehaviour
{
	public List<CheckNewModules> pieces;

    public bool checkEnd = false;

    public GameObject UI;

	public List<int> moveToStars;

	public static ManagerPlayer Instance { get; private set; }

	private void Awake()
	{
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
        UI.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        



    }

    public void CheckEnd()
    {
		if (!checkEnd)
		{
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
				UI.SetActive(true);

			}
		}
	}
    public void ResetLevel()
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
					SceneManager.LoadScene(nextSceneName);
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
}
