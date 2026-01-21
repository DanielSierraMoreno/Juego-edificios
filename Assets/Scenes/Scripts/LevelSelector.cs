using System.Collections;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelector : MonoBehaviour
{
    public TMP_Text text, text2;

    public GameObject star1, star2, star3;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
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
		text.text = this.gameObject.name
	.Replace("(", "")
	.Replace(")", "");

		text2.text = this.gameObject.name
	.Replace("(", "")
	.Replace(")", "");

		int i = GameDataManager.Instance.GetInt(text.text, 0);

        if(i == 1)
        {
			star1.SetActive(true);

		}
		else if (i == 2)
		{
			star1.SetActive(true);
			star2.SetActive(true);

		}
		else if (i == 3)
		{
			star1.SetActive(true);
			star2.SetActive(true);
			star3.SetActive(true);

		}

		bool unlock = GetPreviousLevelValue(text.text);

		if(unlock)
		{
			this.transform.GetChild(2).gameObject.SetActive(true);
			this.transform.GetChild(3).gameObject.SetActive(false);

		}

	}

	// Update is called once per frame
	void Update()
	{

	}

    public void EnterLevel()
    {
		if (FindObjectOfType<EnergyManager>().gameManager.EnergiaActual != 0)
		{
			FindObjectOfType<UIConfirmLevel>().level = text.text;
			FindObjectOfType<UIConfirmLevel>().Show();
		}
		else
		{
			FindObjectsOfType<UIEnergyShop>().FirstOrDefault(t => t.energyShop).Show();
		}




	}



	public bool GetPreviousLevelValue(string currentLevelName)
	{
		// Ejemplo: currentLevelName = "Level 2"

		// 1. Eliminar la parte "Level "
		// El índice 6 es el primer dígito después del espacio (L-e-v-e-l- espacio - DÍGITO)
		string numberString = currentLevelName.Substring(6);

		// Ejemplo: numberString = "2"

		// 2. Convertir a entero
		if (int.TryParse(numberString, out int currentLevelNumber))
		{
			// currentLevelNumber = 2

			// 3. Calcular el nivel anterior
			int previousLevelNumber = currentLevelNumber - 1;

			// 4. Reconstruir la cadena del nivel anterior
			string previousLevelName = "Level " + previousLevelNumber.ToString();

			if (previousLevelNumber <= 0)
				return true;
			// previousLevelName = "Level 1"

			// Uso final:
			int i = GameDataManager.Instance.GetInt(previousLevelName, 0);

			return i != 0;
		}

		return false;
	}
}
