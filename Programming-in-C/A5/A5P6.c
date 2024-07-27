/*
CH-230-A
a5_p6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
scanf("%d", &n);
						//allocating memory
float *arr=malloc(n * sizeof(float));
float* p=arr;
						//reading elems of array
  for(int i = 0; i < n; i++){
    scanf("%f", &arr[i]);
  }
int i = 0;
  while( i < n )
  {                         //checking element by element using pointers
    if(*(p + i) < 0)
    {
      printf("Before the first negative value: %d elements", i);
        break;
    }
   i++;
  }

free(arr);
return 0;

}