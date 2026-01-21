using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EnergyUI : MonoBehaviour
{

    public Slider slider;
	public Slider sliderPreviw;

	public TMP_Text energyAmount, tiempoRestante;

	// Variables internas para la lógica
	private float timer = 0f;
	private bool isX = true;

	EnergyManager energyManager;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{

		energyManager = FindObjectOfType<EnergyManager>();

	}

	// Update is called once per frame
	void Update()
	{
		if (FindObjectOfType<GameDataManager>() != null)
		{
			// 🛑 BLOQUEO DE ENTRADA: Si el gestor de datos no está listo, sal del Update.
			if (!GameDataManager.IsReady)
			{
				return;
			}
		}
		energyAmount.text = energyManager.gameManager.EnergiaActual.ToString() + "\n   /\n       " + energyManager.gameManager.MAX_ENERGIA.ToString();
		slider.value = energyManager.gameManager.EnergiaActual;

		if (energyManager.gameManager.EnergiaActual < energyManager.gameManager.MAX_ENERGIA)
		{
			tiempoRestante.gameObject.SetActive(true);

			int totalSegundos = energyManager.GetSegundosRestantes();

			// 1. Calcula Minutos (división entera)
			int minutos = totalSegundos / 60;

			// 2. Calcula Segundos (módulo)
			int segundos = totalSegundos % 60;

			// 3. Formatea la cadena a M,SS usando :D2 para rellenar con un cero (ej: 3 -> 03)
			tiempoRestante.text = $"{minutos},{segundos:D2}";
		}
		else
		{
			tiempoRestante.gameObject.SetActive(false);
		}
		


		if (energyManager.gameManager.EnergiaActual < energyManager.gameManager.MAX_ENERGIA)
		{
			// Aumenta el temporizador
			timer += Time.deltaTime;

			// Comprueba si es hora de cambiar de valor
			if (timer >= 0.25f)
			{
				// Resetea el temporizador
				timer = 0f;

				// Invierte el estado (si es X, pasa a X+1, y viceversa)
				isX = !isX;

				// Aplica el nuevo valor
				if (isX)
				{
					// X
					sliderPreviw.value = energyManager.gameManager.EnergiaActual;
				}
				else
				{
					// X + 1
					sliderPreviw.value = energyManager.gameManager.EnergiaActual + 1f;
				}
			}
		}
	}
}
