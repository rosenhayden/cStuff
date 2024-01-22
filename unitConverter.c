#include <stdio.h>

int celciusToFahrenheit(int userInput) {
  return (userInput * 9/5) + 32;
}
int fahrenheitToCelcius(int userInput) {
  return (userInput-32) * 5/9;
}

int converter(char conversionType, int userInput) {
  switch (conversionType) {
    case 'c':
      return celciusToFahrenheit(userInput);
    case 'f':
      return fahrenheitToCelcius(userInput); 
    default:
      printf("Invalid conversion type\n");
      return 0;
  }
}

int main() {
  int userInput;
  char conversionType;
  printf("enter and int followed by c or f.")
  scanf("%d %c", &userInput, &conversionType);

  int convertedUserInput = converter(conversionType, userInput);
  printf("Converted: %d\n", convertedUserInput);

  return 0;
}
