#include <stdio.h>
#include <string.h>
int main() {

  //Structs are pretty much classes without methods.
  struct Robot {
    char name[16];
    int powerLevel; 
  };

  struct Robot r1;
  struct Robot r2;
  
  strcpy(r1.name, "Red Bot");
  r1.powerLevel = 12;

  strcpy(r2.name, "Blue Bot");
  r2.powerLevel = 31;

  printf("%s\n", r1.name);
  printf("%d\n", r1.powerLevel);
  printf("%s\n", r2.name);
  printf("%d\n", r2.powerLevel);
  
  return 0;
}
