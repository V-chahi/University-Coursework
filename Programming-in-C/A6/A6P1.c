/*
CH-230-A
a6_p1.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

#define swap(type, a, b) \
do { \
    struct { type *a; type *b; type t; } swap; \
    swap.a  = &(a); \
    swap.b  = &(b); \
    swap.t  = *swap.a; \
    *swap.a = *swap.b; \
    *swap.b =  swap.t; \
} while (0)

int main(){

int x,y;
scanf("%d", &x);
scanf("%d", &y);

float a,b;
scanf("%f", &a);
scanf("%f", &b);

swap(int, x,y);
swap(float, a,b);

printf("After swapping:\n");
printf("%d\n", x);
printf("%%d\n, y);
printf("%.6f\n", a);
printf("%.6f\n, b);

    return 0;
}