using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class YutCheckZone : MonoBehaviour
{
  Vector3 yutVelocity;
  public Text scoreText;
  public YutScript yut1, yut2, yut3, yut4;
  int[] yutResult = new int[4];
  // Start is called before the first frame update
  void Start()
  {

  }

  // Update is called once per frame
  void Update()
  {
      
  }

  private void FixedUpdate() {
    yutVelocity = YutScript.yutVelocity;

    // if(Input.GetKeyDown (KeyCode.Space)){
    //   score = 0;
    // }
  }

  private void OnTriggerStay(Collider collider) {
    if(yutVelocity.x == 0f && yutVelocity.y == 0f && yutVelocity.z == 0f){
      switch(collider.gameObject.name){
        case "Side_top":
          Debug.Log("side top");
          yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
          //yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
          break;
        case "Side_bottom":
          Debug.Log("side bottom");
          yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
          break;
      }
      scoreText.text = ""+yutResult[0]+yutResult[1]+yutResult[2]+yutResult[3];
    }
  }
}
