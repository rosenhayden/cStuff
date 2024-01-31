#include <stdio.h>
 //Lets try to make the game board as chars and append the selected slot on the board to either x if player b or y if player a
char gameBoard[3][3] = {
  {
    '_',
    '_',
    '_'
  },
  {
    '_',
    '_',
    '_'
  },
  {
    '_',
    '_',
    '_'
  }
};
int playerA[3][3] = {
  {
    0,
    0,
    0
  },
  {
    0,
    0,
    0
  },
  {
    0,
    0,
    0
  }
};
int playerB[3][3] = {
  {
    0,
    0,
    0
  },
  {
    0,
    0,
    0
  },
  {
    0,
    0,
    0
  }
};

int playerInputX;
int playerInputY;

int gameOver = 1;
int roundCount = 0;

void checkWinner(int player[][3], int player2[][3], int rows) {
  if (roundCount >= 3) {
    int tempX = 0;
    int tempY = 0;

    for (int i = 0; i < rows; i++) {
      tempX += playerA[i][0];
    }

    for (int j = 0; j < rows; j++) {
      tempY += playerA[0][j];
    }
    if (tempX == 3 || tempY == 3 || playerA[0][0] == 1 && playerA[1][1] == 1 && playerA[2][2] || playerA[2][0] == 1 && playerA[1][1] == 1 && playerA[0][2] == 1) {
      printf("Player X WINS\n");
      gameOver = 0;
    }
    tempX = 0;
    tempY = 0;
    for (int i = 0; i < rows; i++) {
      tempX += playerB[i][0];
    }

    for (int j = 0; j < rows; j++) {
      tempY += playerB[0][j];
    }
    if (tempX == 3 || tempY == 3 || playerB[0][0] == 1 && playerB[1][1] == 1 && playerB[2][2] || playerB[2][0] == 1 && playerB[1][1] == 1 && playerB[0][2] == 1) {
      //printf("\e[1;1H\e[2J");
      printf("Player O WINS\n");
      gameOver = 0;
    }
  }
}

void initializeGameBoard() {

  printf("\e[1;1H\e[2J");
  printf("Round, %d\n", roundCount);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%c ", gameBoard[i][j]);
    }
    printf("\n");
  }
}

void gameLoop() {
  while (gameOver == 1) {
    initializeGameBoard();
    //printf("\e[1;1H\e[2J");
    int cannotPlace = 0;
    int temp;
    printf("Player X:\nchoose x cordinate\n");
    scanf("%d", & playerInputX);
    printf("choose y cordinate\n", & playerInputY);
    scanf("%d", & playerInputY);
 

    temp = playerA[playerInputX][playerInputY];
    playerA[playerInputY - 1][playerInputX - 1] = 1;
    gameBoard[playerInputY - 1][playerInputX - 1] = 'X';
    cannotPlace = 1;
    initializeGameBoard();
    /*
  printf("Player A Board\n");
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++) {
      printf("%d, ", playerA[i][j]);
    }
  printf("\n");
  }
*/
    printf("Player O:\nchoose cordinate x\n");
    scanf("%d", & playerInputX);
    printf("choose y cordinate\n", & playerInputY);
    scanf("%d", & playerInputY);

    roundCount++;

    temp = playerB[playerInputX][playerInputY];
    playerB[playerInputY - 1][playerInputX - 1] = 1;
    gameBoard[playerInputY - 1][playerInputX - 1] = 'O';
    initializeGameBoard();
    /* printf("Player B Board\n");
        for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
          printf("%d, ", playerB[i][j]);
        }
      printf("\n");
      }
    */
    checkWinner(playerA, playerB, 3);
    roundCount++;

    printf("Current round: %d\n", roundCount);
    if (roundCount > 9) {
      gameOver = 0;
    }
  }

}

int main() {
  gameLoop();
  return 0;
}
