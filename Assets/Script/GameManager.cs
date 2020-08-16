using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
  private static GameObject player1MoveText, player2MoveText;
  private static GameObject pieceA1, pieceB1;

  public static List<int> yutResultList = new List<int>();
  public static int player1StartWaypoint = 0;
  public static int player2StartWaypoint = 0;

  public static bool gameOver = false;

  void Start()
  {
    player1MoveText = GameObject.Find("Player1MoveText");
    player2MoveText = GameObject.Find("Player2MoveText");

    pieceA1 = GameObject.Find("PieceA1");
    pieceB1 = GameObject.Find("PieceB1");

    pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
    pieceB1.GetComponent<PieceMove1>().moveAllowed = false;

    player1MoveText.gameObject.SetActive(true);
    player2MoveText.gameObject.SetActive(false);
  }

  // Update is called once per frame
  void Update()
  {
    if(pieceA1.GetComponent<PieceMove1>().curWaypoint > player1StartWaypoint + yutResultList[0])
    {
      //pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
      player1MoveText.gameObject.SetActive(false);
      player2MoveText.gameObject.SetActive(true);
      player1StartWaypoint = pieceA1.GetComponent<PieceMove1>().curWaypoint - 1;
    }

    if (pieceB1.GetComponent<PieceMove1>().curWaypoint > player2StartWaypoint + yutResultList[0])
    {
      //pieceB1.GetComponent<PieceMove1>().moveAllowed = false;
      player1MoveText.gameObject.SetActive(true);
      player2MoveText.gameObject.SetActive(false);
      player2StartWaypoint = pieceB1.GetComponent<PieceMove1>().curWaypoint - 1;
    }
  }

  public static void MovePiece(int playerToMove)
  {
    switch (playerToMove)
    {
      case 1:
        pieceA1.GetComponent<PieceMove1>().Move(yutResultList[0]);
        break;
      case 2:
        pieceB1.GetComponent<PieceMove1>().Move(yutResultList[0]);
        break;
    }
  }
}
