using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;
using Debug = UnityEngine.Debug; // Diagnostics에 있는 거랑 충돌나서 이거 추가함

public class YutCheckZone : MonoBehaviour
{
  //Vector3 yutVelocity;
  public Text scoreText;
  public YutScript yut1, yut2, yut3, yut4;
  int[] yutResult = new int[4];
  string[] resultText = new string[] { "모", "도", "개", "걸", "윷"};
  Stopwatch stopwatch = new Stopwatch();

  private int whosTurn = 1; // 1 or -1
  private int yutResultSum = -16;
  //private bool coroutineAllowed = true;
  
  void Start()
  {
    Time.timeScale = 3;
  }

  // Update is called once per frame
  void Update()
  {
    if (Input.GetKeyDown(KeyCode.Space) && !GameManager.gameOver)
    {
      Debug.Log("space & throw yuts!");
      yutResult = new int[] { -4, -4, -4, -4};
      yutResultSum = -16;
      scoreText.text = "던졌다!";
      stopwatch.Reset();
      stopwatch.Start();
    }
  }

  private void FixedUpdate() {
    //yutVelocity = YutScript.yutVelocity;
    //isThrow = YutScript.isThrow;

    
  }

  private void OnTriggerStay(Collider collider) {
    //if(yutVelocity.x == 0f && yutVelocity.y == 0f && yutVelocity.z == 0f){
    if (stopwatch.ElapsedMilliseconds > 2000)
    {
      //stopwatch.Stop();

      switch (collider.gameObject.name){
      case "Side_top":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
        //Time.timeScale = 0;
        break;
      case "Side_bottom":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
        //Time.timeScale = 0;
        break;
      }
      yutResultSum = yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3];
    }

    if (yutResultSum >= 0)
    {
      Debug.Log("set Text");
      scoreText.text = "" + yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3];

      GameManager.yutSideThrown = yutResultSum;
      if (whosTurn == 1)
      {
        Debug.Log("whosTurn 1");
        GameManager.MovePlayer(1);
      }
      else if (whosTurn == -1)
      {
        Debug.Log("whosTurn 2");
        GameManager.MovePlayer(2);
      }
      stopwatch.Reset();
      yutResultSum = -16;
      whosTurn *= -1;
    }
  }
}
