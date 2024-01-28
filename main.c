#include <stdio.h> 
#include <stdbool.h>
int gameBoard[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int playerA[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int playerB[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int playerInputX;
int playerInputY;
int gameOver = 1;
//int boardSize = sizeof(gameBoard / gameBoard[0][0]);




  int main() {
  printf("Game Board:\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d, ", gameBoard[i][j]);
    }
  printf("\n");
  }

while(gameOver == 1) { 
  printf("choose x\n");
  scanf("%d", &playerInputX);
  printf("choose y\n", &playerInputY);
  scanf("%d", &playerInputY);

  int temp = playerA[playerInputX][playerInputY]; 
  playerA[playerInputY-1][playerInputX-1] = 1;

  printf("Player A Board\n");
   for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d, ", playerA[i][j]);
    }
  printf("\n");
  }

  }

 

  return 0;
}
