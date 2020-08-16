using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;
using Debug = UnityEngine.Debug; // Diagnostics에 있는 Debug랑 충돌나서 이거 추가함

/*
 * 윷의 앞뒤를 확인하기 위한 영역.
 */
public class YutCheckZone : MonoBehaviour
{
  public Text scoreText;
  public Button throwBtn;

  int[] yutResult = new int[4];           // 각 윷의 결과 저장
  int yutResultSum;                       // 각 윷 결과 합 (0-4)
  string[] resultText;                    // 결과별 명칭 배열
  int whosTurn = 1;                       // 차례 (A팀: 1, B팀: -1)
  //bool throwable;                         // 던질 수 있는 상황인가?
  Stopwatch stopwatch = new Stopwatch();  // 진행 속도
  
  void Start()
  {
    ResetYut();
    resultText = new string[] { "모", "도", "개", "걸", "윷" };
    //throwable = true; 
  }

  void Update()
  {
    //if (Input.GetKeyDown(KeyCode.Space))
    //{
      //if (!GameManager.gameOver && throwable)
      //{
      //  throwable = false;  // 중복 던지기 방지!
      //  Time.timeScale = 3; // 윷 던지는 속도 3배속
      //  ResetYut();
      //  scoreText.text = "던졌다!";
      //  stopwatch.Reset();
      //  stopwatch.Start();
      //}
    //}
  }

  int SumYutResult()
  { return yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3]; }

  // 하나라도 결과가 나오지 않을 때 음수가 되도록 -4 으로 잡음.
  // 4개의 윷이 모두 결과가 나오면 ResetYut() >= 0
  void ResetYut()
  { yutResult = new int[] { -4, -4, -4, -4 }; }

  public void OnThrowYuts()
  {
    Time.timeScale = 3; // 윷 던지는 속도 3배속
    ResetYut();
    scoreText.text = "던졌다!";
    stopwatch.Reset();
    stopwatch.Start();
  }

  private void OnTriggerStay(Collider collider) {
    if (stopwatch.ElapsedMilliseconds > 2000)
    {
      stopwatch.Stop();

      switch (collider.gameObject.name){
      case "Side_top":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
          Debug.Log(collider.transform.rotation.x);
        break;
      case "Side_bottom":
        yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
          Debug.Log(collider.transform.rotation.x);
          break;
      }
    }

    if (SumYutResult() >= 0)
    {
      Time.timeScale = 1; // 정상속도로 돌아가기
      scoreText.text = "" + yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3];

      GameManager.yutSideThrown = SumYutResult();
      if (whosTurn == 1)
      {
        Debug.Log("whosTurn A");
        GameManager.MovePlayer(1);
      }
      else if (whosTurn == -1)
      {
        Debug.Log("whosTurn B");
        GameManager.MovePlayer(2);
      }
      stopwatch.Reset();
      ResetYut();
      whosTurn *= -1;
      throwBtn.gameObject.SetActive(true);
      //throwable = true;
    }
  }
}
