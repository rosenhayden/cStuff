#include <stdio.h>
#include <stdbool.h>
bool even_or_odd(int userInputAsInt){
  if (userInputAsInt % 2 == 0) {
    return true;
  }
  return false;  
} 

int main() {
  int userInputAsInt;
  printf("Enter an integer:");
  scanf("%d", &userInputAsInt);

  bool result = even_or_odd(userInputAsInt); 
  printf("%d", result);
  
  return 0;

}
