/*
It is suggested that passwords mix letters and digits such that passwords are
not that easy to guess. A good password must have at least a minimum length of 8
characters and needs to contain at least three digits. Please write a function
as a password checker which get an array of characters as parameter and
determines whether the password is good or not by returning true or false,
respectively
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAXSIZE 30

bool pass(char str[]) {
  bool value1 = true;
  bool value2 = false;

  int length;
  length = strlen(str);
  int count = 0, j;

  for (j = 0; str[j] != '\0'; j++) {
    if (str[j] >= 48 && str[j] <= 57) {
      count++;
    }
  }

   printf("length is %d\n",length);

  if (length >= 8 && count >= 3) {
    return true;
    printf("%d\n",value1);
  } else {
    return false;
    printf("%d\n",value2);
  }
}
int main(){

  char str[MAXSIZE];
  printf("Enter pasword:");
  scanf("%s", str);
  printf("%d\n", pass(str));

  return 0;
}
