/*
CH-230-A
a3_p1.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main() {
float x ;
int n;

scanf("%f", &x);
scanf("%d", &n);

while ( n<=0)
{
    printf("enter valid input: ");
scanf("%d", &n);
}
    for(int i=0; i<n; i++)
    {
      printf("%d\n", n);
    }

return 0;
}