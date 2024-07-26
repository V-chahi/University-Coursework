/*
CH-230-A
a3_p6.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float sum= kg*2.2 +g*0.001*2.2;
    return sum;
}

int main() {
int g,kg;

scanf("%d",&kg);
scanf("%d",&g);

printf("Result of conversion: %f",to_pounds(kg,g));printf("\n");

return 0;
}