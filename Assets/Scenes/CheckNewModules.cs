using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class CheckNewModules : MonoBehaviour
{
	public enum Type { PLAYER_MODULE, BUTTON, BULLET, DIANA, NONE}
	public List<CheckNewModules> pieces;


	public Type type;

	[SerializeField]
	private UnityEvent evento;

	public bool OnlyPlayOnce = true;

	bool played = false;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

	public void PlayEvent()
	{
		if (OnlyPlayOnce)
		{
			if (!played)
			{
				evento.Invoke();
			}


			played = true;
		}
		else
		{
			evento.Invoke();

		}
	}

	private void OnTriggerEnter(Collider other)
	{
		if(other.gameObject.GetComponent<CheckNewModules>() != null)
        {


			switch(type)
			{
				case Type.PLAYER_MODULE:
					CheckPlayerModule(other.gameObject);
					break;
				case Type.BULLET:
					CheckBullet(other.gameObject);
					break;
				case Type.BUTTON:
					CheckButton(other.gameObject);
					break;
			}


        }

		if(other.gameObject.CompareTag("Die") && type == Type.PLAYER_MODULE)
		{
			Scene currentScene = SceneManager.GetActiveScene();

			// Carga la escena usando su nombre o Build Index
			SceneManager.LoadScene(currentScene.buildIndex);
		}

		if (type == Type.BULLET)
		{
			PlayEvent();
		}

	}
	private void OnTriggerStay(Collider other)
	{
		if (other.gameObject.GetComponent<CheckNewModules>() != null)
		{

			switch (type)
			{
				case Type.PLAYER_MODULE:
					CheckPlayerModule(other.gameObject);
					break;
				case Type.BULLET:
					CheckBullet(other.gameObject);

					break;
				case Type.BUTTON:
					CheckButton(other.gameObject);
					break;

			}


		}

		if (other.gameObject.CompareTag("Die") && type == Type.PLAYER_MODULE)
		{
			Scene currentScene = SceneManager.GetActiveScene();

			// Carga la escena usando su nombre o Build Index
			SceneManager.LoadScene(currentScene.buildIndex);
		}

	}
	private void OnTriggerExit(Collider other)
	{
		if (other.gameObject.GetComponent<CheckNewModules>() != null)
		{
			pieces.Remove(other.gameObject.GetComponent<CheckNewModules>());	
		}
	}


	void CheckPlayerModule(GameObject other)
	{

		if (!PlayerController.Instance.pieces.Contains(other.gameObject.GetComponentInParent<ModularPlayerPiece>()))
		{
			if (!pieces.Contains(other.gameObject.GetComponent<CheckNewModules>()))
			{
				pieces.Add(other.gameObject.GetComponent<CheckNewModules>());

			}
		}


	}

	void CheckBullet(GameObject other)
	{
		switch (other.gameObject.GetComponent<CheckNewModules>().type)
		{
			case Type.DIANA:
				other.gameObject.GetComponent<CheckNewModules>().PlayEvent();
				break;
		}

	}

	void CheckButton(GameObject other)
	{
		switch (other.gameObject.GetComponent<CheckNewModules>().type)
		{
			case Type.PLAYER_MODULE:
				if (!pieces.Contains(other.gameObject.GetComponent<CheckNewModules>()))
				{
					pieces.Add(other.gameObject.GetComponent<CheckNewModules>());
				}

				break;
		}

	}
}
