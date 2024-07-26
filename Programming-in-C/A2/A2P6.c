/*
CH-230-A
a2_p6.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main() {
double x, y;
double *ptr_one, *ptr_two, *ptr_three;

ptr_one= &x;
ptr_two= &x;
ptr_three= &y;
printf("Assign a value to x: ");
scanf("%lf", &x);
printf("Assign a value to y: ");
scanf("%lf", &y);

printf("ptr_one = %p\n", ptr_one);
printf("ptr_two = %p\n", ptr_two);
printf("ptr_three = %p", ptr_three);
return 0;
}