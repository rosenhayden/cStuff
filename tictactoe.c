#include <stdio.h>
//Lets try to make the game board as chars and append the selected slot on the board to either x if player b or y if player a
int gameBoard[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int playerA[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int playerB[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int playerInputX;
int playerInputY;

int gameOver = 1;
int roundCount = 0;


void checkWinner(int player[][3], int player2[][3], int rows) { 
  if(roundCount >=3) {
  int tempX = 0;
  int tempY = 0;
  
  for(int i = 0; i < rows; i++) {
    tempX += playerA[i][0]; 
      }

  for(int j = 0; j < rows; j++) {
      tempY += playerA[0][j];
    }
 if(tempX == 3 || tempY == 3 || playerA[0][0] == 1 && playerA[1][1] == 1 && playerA[2][2] || playerA[2][0] == 1 && playerA[1][1] == 1 && playerA[0][2] == 1) {
    printf("Player A WINS\n");
    gameOver = 0;  
  }
  tempX = 0;
  tempY = 0;
  for(int i = 0; i < rows; i++) {
    tempX += playerB[i][0]; 
      }

  for(int j = 0; j < rows; j++) {
      tempY += playerB[0][j];
    }
if(tempX == 3 || tempY == 3 || playerB[0][0] == 1 && playerB[1][1] == 1 && playerB[2][2] || playerB[2][0] == 1 && playerB[1][1] == 1 && playerB[0][2] == 1) {
      printf("\e[1;1H\e[2J");
      printf("Player B WINS\n");
    gameOver = 0;  
  }
}
}

void initializeGameBoard(){
  printf("Game Board:\n");
  
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d, ", gameBoard[i][j]);
    }
  printf("\n");
  }
}

void gameLoop() {
while(gameOver == 1) { 
  
  printf("\e[1;1H\e[2J");
  printf("Player A choose x\n");
  scanf("%d", &playerInputX);
  printf("choose y\n", &playerInputY);
  scanf("%d", &playerInputY);

  int temp = playerA[playerInputX][playerInputY]; 
  playerA[playerInputY-1][playerInputX-1] = 1;

  printf("Player A Board\n");
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++) {
      printf("%d, ", playerA[i][j]);
    }
  printf("\n");
  }

  printf("Player B choose x\n");
  scanf("%d", &playerInputX);
  printf("choose y\n", &playerInputY);
  scanf("%d", &playerInputY);

  temp = playerB[playerInputX][playerInputY]; 
  playerB[playerInputY-1][playerInputX-1] = 1;

  printf("Player B Board\n");
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++) {
      printf("%d, ", playerB[i][j]);
    }
  printf("\n");
  }

  checkWinner(playerA, playerB, 3);
  roundCount++;

  printf("Current round: %d\n", roundCount);
  if (roundCount > 9) {
      gameOver = 0;
    }
}

}

int main() {
  initializeGameBoard();
  gameLoop();
  return 0;
}

