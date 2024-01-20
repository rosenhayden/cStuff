#include <stdio.h>
int sum (int number1, int number2) {
  return number1 + number2;
}

int main() {    

    int number1, number2, add;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    
    add = sum(number1, number2);      
    
    printf("%d + %d = %d", number1, number2, add);
    return 0;
}

