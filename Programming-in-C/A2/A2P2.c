/*
CH-230-A
a2_p2.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main(){
char a;

scanf("%c", &a);
getchar();

printf("character=%c\n", a);
printf("decimal=%d\n", a);
printf("octal=%02o\n", a);
			       //02o converts from char to octal
printf("hexadecimal=%02x\n", a);
			     //02X converts from char to hexadecimal
return 0;
}