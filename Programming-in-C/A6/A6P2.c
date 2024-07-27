/*
CH-230-A
a6_p2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

#define lsb(a)(((a)& 1) ? 1 : 0)

int main(){

   unsigned char value;
    scanf("%c", &value);
    getchar();

    printf("The decimal representation is: %d\n", value);
    printf("The least significant bit is: %d", lsb((int) value));

 return 0;
}