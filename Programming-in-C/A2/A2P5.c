/*
CH-230-A
a2_p5.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main() {
int a;
printf("Assign a value to a: ");
scanf("%d", &a);
printf("a=%d\n", a);
int *ptr_a; 
ptr_a= &a; 
printf("The address of a: %d\n", ptr_a);
					//increasing a's value by ref
*ptr_a= *ptr_a +5;
printf("a after addition = %d\n", a);
printf("The address of a after addition : %d\n", ptr_a);

return 0;
}