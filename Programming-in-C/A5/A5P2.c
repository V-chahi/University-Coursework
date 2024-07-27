/*
CH-230-A
a5_p2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size){
                                                      //dividing all elems by 5
  for(int i = 0; i < size; i++){
    arr[i] = arr[i] / 5;
  }
}

int main(){
    
float arr[5];
							//entering values
    arr[0]=5.5;
    arr[1]=6.5;
    arr[2]=7.75;
    arr[3]=8;
    arr[4]=9.6;
    arr[5]=10.36;
					  //printing element by element
printf("Before:\n");
  for(int i = 0; i < 6; i++){
    printf("%.3f ", arr[i]);
  }
   printf("\n");
                                   //dividing all the elements by 5
    divby5(arr, 6);
    printf("After:\n");

    				//printing element by element
  for(int i = 0; i < 6; i++){
    printf("%.3f ", arr[i]);
  }
   printf("\n");

    return 0;
}