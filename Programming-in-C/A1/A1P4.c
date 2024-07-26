/*
CH-230-A
a1_p4.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>

int main() {
int x= 17;
int y= 4;
printf("x=%d\n", x);
printf("y=%d\n", y);
printf("sum=%d\n", x+y);
printf("product=%d\n", x*y);
printf("difference=%d\n", x-y);
double div = (double) x/y;
printf("division=%lf\n",div);
int rem = (int) x - y * (floor(div));
printf("remainder of division=%d\n", rem);
return 0;
}