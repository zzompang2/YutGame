using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
  public GameObject[] wayBlocks;

  private static GameObject player1MoveText, player2MoveText;
  //private static GameObject pieceA1, pieceB1;

  public static List<int> yutResultList = new List<int>();
  //public static int player1StartWaypoint = 0;
  //public static int player2StartWaypoint = 0;

  public static bool isThrowStep = true;
  public static bool gameOver = false;

  GameObject selectedPiece;
  GameObject selectedBlock;

  void Start()
  {
    player1MoveText = GameObject.Find("Player1MoveText");
    player2MoveText = GameObject.Find("Player2MoveText");

    //pieceA1 = GameObject.Find("PieceA1");
    //pieceB1 = GameObject.Find("PieceB1");

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
          // [1] piece를 선택한 경우
          if (raycast.collider.gameObject.tag == "PieceA")
          {
            // 기존 칠해진 블럭들 초기화
            ClearBlockColor();

            selectedPiece = raycast.collider.gameObject;
            Debug.Log("target piece: " + selectedPiece.gameObject.name);
          }
          // [2] block을 선택한 경우
          else if(raycast.collider.gameObject.tag == "WayBlock")
          {
            selectedBlock = raycast.collider.gameObject;
            if (selectedBlock.GetComponent<BlockScript>().isMovable)
            {
              Debug.Log("이동 가능한 블럭을 선택했습니다.");
              MovePiece();
              ClearBlockColor();
              selectedPiece = null;
              if (yutResultList.Count == 0)
              {
                isThrowStep = true;
              }
            }
            else Debug.Log("이동 불가능한 블럭입니다.");
          }
          // [3] piece/block 외의 것을 선택한 경우: 초기화
          else
            selectedPiece = null;
        }

        // 선택된 piece가 있는 경우, 이동 가능한 블럭 색칠하기
        if (selectedPiece != null)
        {
          //Debug.Log("target is clicked!");
          int curWaypoint = selectedPiece.gameObject.GetComponent<PieceScript>().curWaypoint;

          foreach (int result in yutResultList)
          {
            wayBlocks[curWaypoint + result].GetComponent<Renderer>().material.color = Color.green;
            wayBlocks[curWaypoint + result].GetComponent<BlockScript>().isMovable = true;
            wayBlocks[curWaypoint + result].GetComponent<BlockScript>().yutResult = result;
          }
        }
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

  void ClearBlockColor()
  {
    foreach (GameObject block in wayBlocks)
    {
      block.GetComponent<Renderer>().material.color = Color.gray;
      block.GetComponent<BlockScript>().isMovable = false;
    }
  }

  public void MovePiece()
  {
    int yutResult = selectedBlock.GetComponent<BlockScript>().yutResult;
    selectedPiece.GetComponent<PieceScript>().Move(yutResult);

    yutResultList.Remove(yutResult); // Remove(): List<T>에서 처음 발견되는 특정 개체를 제거합니다.
  }
}
