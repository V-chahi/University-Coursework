/*
CH-230-A
a1_p3.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

		//# was missing
int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5;
//b is a decimal, not an integer
result =  (a / b);
printf("The result is %lf\n", result);
//result is decimal not int
return 0;
} 