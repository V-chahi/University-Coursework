/*
CH-230-A
a2_p4.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>

int main() {
float a, b, h;

scanf("%f\n%f\n%f, &a, &b, &h);

float squ= a*a;
float rec= a*b;
float tri= a*h/2;
float tra= (a+b)/2*h;
printf("square area=%f\n", squ);
printf("rectangle area=%f\n", rec);
printf("triangle area=%f\n", tri);
printf("trapezoid area=%f\n", tra);

return 0;
}