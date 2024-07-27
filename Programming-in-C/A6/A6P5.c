/*
CH-230-A
a6_p5.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main(){
   unsigned char i;
     scanf("%c", &i);
     getchar();
   printf("The decimal representation is: %d\n", value);

   						 //Counting the significant bits until match
    for (binary = 0; ( 1 << binary) <= value; binary++ ){ }     

    printf("The backwards binary representation is: ");
    for (int i = 0; i < binary; i++){   
       							 //1s and 0s are shifted to right 
      printf("%d", ((value >> i) & 1));  
    }

    printf("\n");
  return 0;

}