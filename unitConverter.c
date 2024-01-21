#include <stdio.h>

int celcius(int userInput) {
  return userInput + 32;
}
int converter(char conversionType, int userInput) {
  switch (conversionType) {
    case 'c':
      return celcius(userInput);
    
  }
}
int main() {
  int userInput;
  char conversionType;
  scanf("%d, %c", &userInput, &conversionType);
  int convertedUserInput = converter(conversionType, userInput);
  printf("Converted:");
  printf("%d", convertedUserInput);
  return 0;

}

#include <stdio.h>

int celciusToFahrenheit(int userInput) {
  return (userInput * 9/5) + 32;
}

int converter(char conversionType, int userInput) {
  switch (conversionType) {
    case 'c':
      return celciusToFahrenheit(userInput);
    default:
      printf("Invalid conversion type\n");
      return 0;
  }
}

int main() {
  int userInput;
  char conversionType;

  // Use "%d %c" instead of "%d, %c"
  scanf("%d %c", &userInput, &conversionType);

  int convertedUserInput = converter(conversionType, userInput);
  printf("Converted: %d\n", convertedUserInput);

  return 0;
}
