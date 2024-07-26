/*
CH-230-A
a2_p3.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main() {
int w, d, h;
printf("the numbers of weeks:\n");
					//Num of weeks
scanf("%d", &w);
printf("the numbers of days:\n");
					//Num of days
scanf("%d", &d);
printf("the numbers of hours:\n");
					//Num of hours
scanf("%d", &h);
					//converting to hours & summing up
int s= h + 24*d + 7*24*w ;
printf("the numbers of hours:%d", s);
return 0;
}