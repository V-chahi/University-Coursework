/*
CH-230-A
a4_p1.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main() {
float x, X, t,s;
scanf("%f", &x);
scanf("%f", &X);
scanf("%f", &t);

s=x;

for(int i=0; i<((X-x)/t)+1; i++){
    s=x+i*t;
    printf("%f %f %f\n", s , M_PI*s*s , 2*M_PI*s);
}
return 0;
}