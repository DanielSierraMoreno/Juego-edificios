using System.ComponentModel;
using UnityEngine;

public class Movimiento : MonoBehaviour
{
    public GameObject spawner, camera;
	public float velocidad = 2f; // velocidad del movimiento
	public float limite = 8f;    // límite en X (de -8 a 8)

	public GameObject prefab1, prefab2, prefab3;

	GameObject actual;

	public PerfectDetectorManager latest;

	public bool release = false;

	bool moviendoY = false;

	private float xProgress = 0f; // progreso en X (0 a 1)
	private int xDirection = 1;   // dirección de movimiento: 1 o -1

	float startPosX = 0;// Start is called once before the first execution of Update after the MonoBehaviour is created

	bool spawn = false;

	bool muerto = false;

	public int numberTowerSize = 0;

	int maxSize = 0;

	bool last = false;
	void Start()
    {
		actual = Instantiate(prefab1,spawner.transform,true);
		actual.transform.localPosition = Vector3.zero;
		startPosX = spawner.transform.position.x;
	}

    // Update is called once per frame
    void Update()
    {
        
    }

	private void FixedUpdate()
	{
        if (last)
        {
			return;
        }

        if (muerto)
        {
			return;
        }


        if (spawn)
		{
			if(!latest.check)
			{
				//for (int i = 0; i < latest.detectors.Length; i++)
				//{
				//	if (latest.detectors[i].enter)
				//	{
				//		muerto = true;

				//	}
				//}
				return;
			}
			else
			{
				Spawn();
			}
		}

		if (spawner != null && !release && !moviendoY)
		{
			// Actualizar progreso
			xProgress += xDirection * velocidad * Time.fixedDeltaTime / (limite * 2);

			// Rebotar al llegar a los extremos
			if (xProgress > 1f)
			{
				xProgress = 1f;
				xDirection = -1;
			}
			else if (xProgress < 0f)
			{
				xProgress = 0f;
				xDirection = 1;
			}

			// Calcular posición X
			float x = Mathf.Lerp(-limite, limite, xProgress);
			spawner.transform.position = new Vector3(startPosX + x, spawner.transform.position.y, spawner.transform.position.z);
		}

		if (Input.GetMouseButton(0) && !release)
		{
			Release();
		}
	}

	public void SetMaxSize(int i)
	{
		maxSize = i;
	}
	void Release()
	{

		if(velocidad < 32)
		{
		velocidad += 1f;
		}
		else if (velocidad > 32 && velocidad < 48)
		{
			velocidad += 1.5f;
		}
		else
		{
			velocidad += 0.5f;
		}

		if(velocidad > 64)
		{
			velocidad = 64;
		}
		release = true;
		actual.transform.parent = null;
		actual.GetComponent<Rigidbody>().isKinematic = false;
		actual.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
		actual.GetComponent<Rigidbody>().linearVelocity = Vector3.zero;

		StartCoroutine(MoverSpawnerY(8f, 0.25f)); // sube 10 unidades en 0.5 segundos

		Invoke(nameof(SetSpawn), 0.25f);
	}

	void SetSpawn()
	{
		spawn = true;
	}
	void Spawn()
	{
		numberTowerSize++;
		latest = actual.GetComponentInChildren<PerfectDetectorManager>();

        if (numberTowerSize == maxSize)
        {
			last = true;
			return;
		}


		if (numberTowerSize == maxSize-1)
		{
			actual = Instantiate(prefab3, spawner.transform, true);
		}
		else
		{
			actual = Instantiate(prefab2, spawner.transform, true);
		}

		spawn = false;
		release = false;
		actual.transform.localPosition = Vector3.zero;
		Invoke(nameof(StopRelease), 0.1f);



	}

	void StopRelease()
	{
		release = false;

	}
	// Corrutina para mover el spawner suavemente en Y
	System.Collections.IEnumerator MoverSpawnerY(float distancia, float duracion)
	{
		moviendoY = true;

		Vector3 inicio = camera.transform.position;
		Vector3 destino = inicio + new Vector3(0, distancia, 0);
		Vector3 inicio2 = spawner.transform.position;
		Vector3 destino2 = inicio2 + new Vector3(0, distancia, 0);
		float tiempo = 0f;

		while (tiempo < duracion)
		{
			camera.transform.position = Vector3.Lerp(inicio, destino, tiempo / duracion);

			spawner.transform.position = Vector3.Lerp(inicio2, destino2, tiempo / duracion);
			tiempo += Time.deltaTime;
			yield return null;
		}
		camera.transform.position = destino; // asegurar la posición final

		spawner.transform.position = destino2; // asegurar la posición final
		moviendoY = false;
	}
}
