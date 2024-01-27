#include <stdio.h>

int main() {
  int prices[] = {1, 2, 3, 4, 5, 6, 7 ,8};
  for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    printf("%d\n", prices[i]);
  }
  return 0;
}
