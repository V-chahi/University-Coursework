/*
CH-230-A
a6_p3.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

#define MAX(A, B, C, max) { (A > B) ? ((A > C) ? (max = A) : (max = C)) : ((B > C) ? (max = B) : (max = C)); }
#define MIN(A, B, C, min) { (A < B) ? ((A < C) ? (min = A) : (min = C)) : ((B < C) ? (min = B) : (min = C)); }
#define MID_RANGE(max, min, res) {  res = (min + max)/ 2.0; }

int main(){
    int a, b, c, min, max;
    double res;

                             //Prompting user to input values 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    MAX(a, b, c, max)
    MIN(a, b, c, min)

    MID_RANGE(max, min, res)

    printf("The mid-range is: %lf\n", res);

 return 0;
}
