/*
CH-230-A
a5_p11.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prime(int x, int i){

 if(x == 1){return 0;}
 elif(x == 2){return 1;}
  else{
    if( x%i == 0 ){return 0;}
    if( i*i > x ){return 1;}
  }
return prime(x, i+1);
}

int main(){

int x;
scanf("%d", &x);

  if(prime(x,2))
    printf("%d is prime\n", x);
  else
    printf("%d is not prime\n", x);

return 0;
}