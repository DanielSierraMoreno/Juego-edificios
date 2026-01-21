using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class UIEnergyShop : MonoBehaviour
{
	public bool energyShop = false;
	public UnityEvent showEvent, hideEvent;
	public TMP_Text cargas = null;

	public GameObject adButton = null;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{

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
		if (cargas != null) 
			cargas.text = GameDataManager.Instance.GetInt("CargasBateria", 5).ToString();

		if(adButton != null)
		{
			if(GameDataManager.Instance.GetInt("NoAds", 0) == 1)
			{
				adButton.SetActive(false);
			}
		}
	}

	public void AD()
	{

	}

	public void SpendCharge()
	{
		int i = GameDataManager.Instance.GetInt("CargasBateria", 5);

		if(i > 0 && !FindObjectOfType<EnergyManager>().IsEnergyFull())
		{
			GameDataManager.Instance.SetInt("CargasBateria", i - 1);
			FindObjectOfType<EnergyManager>().AddEnergy(1);
		}
	}

	public void Show()
	{
		showEvent.Invoke();

	}

	public void Hide()
	{
		hideEvent.Invoke();

	}
}
