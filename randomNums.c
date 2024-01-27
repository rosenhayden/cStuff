#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0)); //Uses the current time as a seed for random number without this line we will get the same random numbers everytime.
  
  int number1 = (rand() % 6) + 1; //rand function gives number between 0 - 32767
  int number2 = (rand() % 6) + 1; 
  int number3 = (rand() % 6) + 1; 
  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);
  return 0;
}
