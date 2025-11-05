using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class UIEnergyShop : MonoBehaviour
{
	public bool energyShop = false;
	public UnityEvent showEvent, hideEvent;
	public TMP_Text cargas = null;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{
		if(cargas != null) 
			cargas.text = PlayerPrefs.GetInt("CargasBateria", 0).ToString();
	}

	public void AD()
	{
		FindObjectOfType<EnergyManager>().AddEnergy(5);

	}

	public void SpendCharge()
	{
		int i = PlayerPrefs.GetInt("CargasBateria", 0);

		if(i > 0 && !FindObjectOfType<EnergyManager>().IsEnergyFull())
		{
			PlayerPrefs.SetInt("CargasBateria", i - 1);
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
