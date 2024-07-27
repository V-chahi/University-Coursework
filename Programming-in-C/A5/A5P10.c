/*
CH-230-A
a5_p10.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

void printAllNumbersBelow(int n){          
  if(n >= 0 ){             		  //Recursively calling fct to print nums until 0
    printf("%d ", n);
    print(n - 1);
  }
}
int main(){

int inp;
    printf("Enter number: ");
    scanf("%i", &inp);
printAllNumbersBelow(inp);

return 0;
}