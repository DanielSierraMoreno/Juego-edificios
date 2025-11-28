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
	[SerializeField]
	private UnityEvent eventoRevert;

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
	public void Revert()
	{
		played = false;
		PlayerController.Instance.OnMMFPlayerCompleted();
	}
	public void PlayEvent(bool notSafe)
	{
		if (OnlyPlayOnce)
		{
			if (!played)
			{
				evento.Invoke();

				if(!notSafe)
				{
					if (PlayerController.Instance.currentSavedMove.events == null)
						PlayerController.Instance.currentSavedMove.events = new List<UnityEvent>();
					PlayerController.Instance.currentSavedMove.events.Add(eventoRevert);
				}

			}


			played = true;
		}
		else
		{
			evento.Invoke();

			if (!notSafe)
			{
				if (PlayerController.Instance.currentSavedMove.events == null)
					PlayerController.Instance.currentSavedMove.events = new List<UnityEvent>();
				PlayerController.Instance.currentSavedMove.events.Add(eventoRevert);
			}
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

		if (other.gameObject.CompareTag("Die") && type == Type.PLAYER_MODULE)
		{
			ManagerPlayer.Instance.Dead(other);

		}

		//if (other.gameObject.CompareTag("InstantDie") && type == Type.PLAYER_MODULE)
		//{
		//	ManagerPlayer.Instance.InstantDead(other);

		//}

		if (type == Type.BULLET)
		{
			PlayEvent(false);
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
			ManagerPlayer.Instance.Dead(other);

		}

		//if (other.gameObject.CompareTag("InstantDie") && type == Type.PLAYER_MODULE)
		//{
		//	ManagerPlayer.Instance.InstantDead(other);

		//}
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
				other.gameObject.GetComponent<CheckNewModules>().PlayEvent(false);
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
