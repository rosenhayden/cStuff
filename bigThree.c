#include <stdio.h>
int biggest(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  }
  else if (b > a && b > c) {
    return b;
  }
  else if (c > a && c > b) {
    return c; 
  }
  return 0;

}
int main() {
 int a, b, c, result;
  printf("Enter three integers:");
  scanf("%d %d %d", &a, &b, &c);
  result = biggest(a, b, c);
  printf("the biggest number is: %d", result);
}

//this program prints the biggest inputed number
