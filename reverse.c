#include <stdio.h>
#include <string.h>

void reverse(char *str) {
  int length = strlen(str);
  for(int i = 0; i < length/2; i++) {
    char temp = str[i];
    str[i] = str[length-1-i];
    str[length-1-i] = temp;
  }
}

int main() {
char str[] = "car";
printf("%s\n", str);
reverse(str);
printf("%s\n", str);

}
