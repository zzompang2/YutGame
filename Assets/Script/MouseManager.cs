//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class MouseManager : MonoBehaviour
{
  public GameObject selectedObject;

  void Update()
  {
    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
    RaycastHit raycast;

    if (Physics.Raycast(ray, out raycast))
    {
      GameObject hitObject = raycast.transform.root.gameObject;
      SelectObject(hitObject);
    }
    else
      ClearSelection();
  }

  void SelectObject(GameObject gameObject)
  {
    if(selectedObject != null)
    {
      if (gameObject == selectedObject) return;
      ClearSelection();
    }
    selectedObject = gameObject;
  }

  void ClearSelection()
  { selectedObject = null; }
}
