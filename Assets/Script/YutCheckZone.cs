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
  string[] yutResultText;                    // 결과별 명칭 배열
  int whosTurn = 1;                       // 차례 (A팀: 1, B팀: -1)
  Stopwatch stopwatch = new Stopwatch();  // 진행 속도
  
  void Start()
  {
    // 값 초기 세팅
    ResetYut();
    yutResultText = new string[] {"도", "개", "걸", "윷", "모"};
    Time.timeScale = 3; // 윷 던지는 속도 3배속
  }

  /* 윷 결과 계산 
   * 1:도 ... 4:윷 5:모
   */
  int SumYutResult()
  {
    int result = yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3];
    return (result == 0 ? 5 : result);
  }

  /* 윷 결과 리셋
   * 하나라도 결과가 나오지 않을 때 음수(또는 0)가 되도록 -3 으로 잡음
   */
  void ResetYut()
  { yutResult = new int[] { -3, -3, -3, -3 }; }

  /* 윷 던지기
   * 버튼이 눌렸을 때 실행.
   */
  public void OnThrowYuts()
  {
    ResetYut();
    scoreText.text = "던졌다!";
    //stopwatch.Reset();
    stopwatch.Start();
  }

  /* 윷을 던진 후 2초 뒤에 강제 계산
   */
  private void OnTriggerStay(Collider collider)
  {
    if (stopwatch.ElapsedMilliseconds > 2000)
    {
      stopwatch.Stop();

      switch (collider.gameObject.name)
      {
        case "Side_top":
          yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
          //Debug.Log(collider.transform.rotation.x);
          break;
        case "Side_bottom":
          yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
          //Debug.Log(collider.transform.rotation.x);
          break;
      }
    }
  }

  private void Update()
  {
    // 네 개의 윷 모두 결과가 나왔을 경우
    if (SumYutResult() > 0)
    {
      //Time.timeScale = 1; // 정상속도로 돌아가기
      int sumYutResult = SumYutResult();

      scoreText.text = yutResultText[sumYutResult-1]; // 결과 화면에 띄우기
      GameManager.yutResultList.Add(sumYutResult);  // 결과 리스트에 저장
      Debug.Log("Add: " + sumYutResult);

      // 윷(4), 모(5)가 나왔을 경우 한 번 더
      if (sumYutResult > 3)
      {
        stopwatch.Reset();
        ResetYut();
        throwBtn.gameObject.SetActive(true);
      }
      // 윷 던지기 모두 끝난 경우
      else
      {
        if (whosTurn == 1)
        {
          Debug.Log("whosTurn A");
          GameManager.MovePiece(1);
        }
        else if (whosTurn == -1)
        {
          Debug.Log("whosTurn B");
          GameManager.MovePiece(2);
        }

        GameManager.yutResultList = new List<int>();
        whosTurn *= -1;
        stopwatch.Reset();
        ResetYut();
        throwBtn.gameObject.SetActive(true);
      }
    }
  }
}
