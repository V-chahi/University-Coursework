/*
CH-230-A
a2_p8.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

float sum(float arr[],  int j)
{

float s=0;
  for(int i=0; i<j; i++){
   s=s+arr[i];
  }
return s;
}

float average (float arr[],  int j)
{

float s=0;

    for(int i=0; i<j; i++){
   s=s+arr[i];
    }

float av=s/j; return av;
}

int main() {
float arr[10];

for(int i=0; i<10; i++)
{
scanf("%f", &arr[i]);

if (arr[i]== -99 || arr[i]== '\0')
    {
        printf("The sum of the values= %f\n", sum(arr, i));
        printf("The average of the values= %f\n", average(arr, i));
        break;
    }
}

return 0;
}