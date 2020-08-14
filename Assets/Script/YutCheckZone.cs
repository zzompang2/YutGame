using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;
using Debug = UnityEngine.Debug; // Diagnostics에 있는 거랑 충돌나서 이거 추가함

public class YutCheckZone : MonoBehaviour
{
  Vector3 yutVelocity;
  public Text scoreText;
  public YutScript yut1, yut2, yut3, yut4;
  int[] yutResult = new int[4];
  string[] resultText = new string[] { "모", "도", "개", "걸", "윷"};
  Stopwatch stopwatch = new Stopwatch();
  // Start is called before the first frame update
  void Start()
  {
  }

  // Update is called once per frame
  void Update()
  {
    if (Input.GetKeyDown(KeyCode.Space))
    {
      Debug.Log("space");
      Time.timeScale = 3;
      scoreText.text = "던졌다!";
      stopwatch.Reset();
      stopwatch.Start();
    }
  }

  private void FixedUpdate() {
    yutVelocity = YutScript.yutVelocity;
    //isThrow = YutScript.isThrow;

    
  }

  private void OnTriggerStay(Collider collider) {
    //if(yutVelocity.x == 0f && yutVelocity.y == 0f && yutVelocity.z == 0f){
    if (stopwatch.ElapsedMilliseconds > 2000)
    {
      switch (collider.gameObject.name){
      case "Side_top":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
        Time.timeScale = 0;
        break;
      case "Side_bottom":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
        Time.timeScale = 0;
        break;
    }
      Debug.Log("set Text");
      scoreText.text = resultText[ yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3] ];
      
    }
  }
}
