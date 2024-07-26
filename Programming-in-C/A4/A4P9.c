/*
CH-230-A
a4_p9.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prodminmax(int arr[], int n){
 int s = arr[0], l = arr[0];
 for(int i = 0; i < n; i++){
   if(s > arr[i])
     s = arr[i];
   if(l < arr[i])
     l = arr[i];
 }
   int p = l * s;
    return p;

}
int main() {
int n;
scanf("%d", &n);

int *arr=malloc(n*sizeof(int));

  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
printf("the product of the smallest");
printf(" and largest elements of the array is %d\n", prodminmax(arr, n));

free(arr);
return 0;
}