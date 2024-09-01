
#include <stdbool.h>
#include <stdio.h>

bool odd(unsigned char data) {
  int last = data & 1;

  printf("%d\n", last);

  if (last == 0) {
    return true;

  } else if (last == 1) {
    return false;
  }
  return true;
}
int main() {
  unsigned char inp;
  scanf("%c", &inp);

  if (odd(inp) == true) {
    printf("Value entered is Even");
  } 
  else {
    printf("Value entered is Odd");
  }

  printf("\n%d\n", 1 & 1);
  printf("%d\n", 1 & 0);
  return 0;
}
