using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
  public GameObject[] wayBlocks;

  private static GameObject player1MoveText, player2MoveText;
  private static GameObject pieceA1, pieceB1;

  public static List<int> yutResultList = new List<int>();
  //public static int player1StartWaypoint = 0;
  //public static int player2StartWaypoint = 0;

  public static bool isThrowStep = true;
  public static bool gameOver = false;

  GameObject targetPiece;

  void Start()
  {
    player1MoveText = GameObject.Find("Player1MoveText");
    player2MoveText = GameObject.Find("Player2MoveText");

    pieceA1 = GameObject.Find("PieceA1");
    pieceB1 = GameObject.Find("PieceB1");

    //pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
    //pieceB1.GetComponent<PieceMove1>().moveAllowed = false;

    player1MoveText.gameObject.SetActive(true);
    player2MoveText.gameObject.SetActive(false);
  }

  // Update is called once per frame
  void Update()
  {
    // 던지기 단계 끝난 경우
    if (!isThrowStep)
    {
      if (Input.GetMouseButtonUp(0))
      {
        // 충돌이 감지된 영역
        RaycastHit raycast;
        // 마우스 포이트 근처 좌표를 만들기
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // 마우스 근처에 오브젝트 있을 경우
        if (Physics.Raycast(ray.origin, ray.direction * 10, out raycast))
        {
          if (raycast.collider.gameObject.gameObject.tag == "PieceA")
          {
            targetPiece = raycast.collider.gameObject;
            Debug.Log(targetPiece.gameObject.name);
          }
          else
            targetPiece = null;
        }

        // 선택된 piece가 있는 경우
        if (targetPiece != null)
        {
          Debug.Log("target is clicked!");
          int curWaypoint = targetPiece.gameObject.GetComponent<PieceScript>().curWaypoint;
          Debug.Log(curWaypoint);

        }
      }
    }
    //if(pieceA1.GetComponent<PieceMove1>().curWaypoint > player1StartWaypoint + yutResultList[0])
    //{
    //  //pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
    //  player1MoveText.gameObject.SetActive(false);
    //  player2MoveText.gameObject.SetActive(true);
    //  player1StartWaypoint = pieceA1.GetComponent<PieceMove1>().curWaypoint - 1;
    //}

    //if (pieceB1.GetComponent<PieceMove1>().curWaypoint > player2StartWaypoint + yutResultList[0])
    //{
    //  //pieceB1.GetComponent<PieceMove1>().moveAllowed = false;
    //  player1MoveText.gameObject.SetActive(true);
    //  player2MoveText.gameObject.SetActive(false);
    //  player2StartWaypoint = pieceB1.GetComponent<PieceMove1>().curWaypoint - 1;
    //}
  }

  public static void MovePiece(int playerToMove)
  {
    switch (playerToMove)
    {
      case 1:
        pieceA1.GetComponent<PieceScript>().Move(yutResultList[0]);
        break;
      case 2:
        pieceB1.GetComponent<PieceScript>().Move(yutResultList[0]);
        break;
    }
  }
}
