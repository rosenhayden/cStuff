#include <stdio.h>
//enums are constants,
enum Day{Mon = 1 , Tue = 2 , Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};
  
int main() {

  enum Day yesterday = Fri;
  enum Day today = Sat;

  printf("Yesterday was the: %dth day of the week\nToday is: %dth day of the week\n", yesterday, today);

  return 0;
}
