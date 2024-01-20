
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}
int subtract(int a, int b) {
  return a - b;
}
int multiply(int a, int b) {
  return a * b;
}
int divide(int a, int b) {
  return a / b;
}
int remain(int a, int b) {
  return a % b;
}


int pickOperator (int a, int b, char operator) {
switch(operator) {
  case '+':
    return add(a, b);
  case '-':
    return subtract(a, b);
  case '*':
    return multiply(a, b);
  case '/':
    return divide(a, b);
  case '%':
    return remain(a, b);
  default: 
    printf("error balls");
  
}


}
int main() {
  int i = 0;
  while(i == 0) {
  int inputA, inputB;
  char operator;
  scanf("%d %c %d", &inputA, &operator, &inputB);
  int answer = pickOperator(inputA, inputB, operator);
  printf("%d\n", answer);
  


  }
  return 0;
}
  
