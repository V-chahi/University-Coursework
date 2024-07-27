/*
CH-230-A
a6_p7.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

void set3bits(unsigned char c, int x, int y, int z){
  int idx=0, mask= 128;						//10000000

  while(idx < 8 ){
    if(idx == 7 - x || idx == 7 - y || idx == 7 - z)
      printf("1");

    elif((c & mask) == 0)
      printf("0");

    else
      printf("1");
   				     //shifting
        mask = mask>>1;
        idx++;
  }  

}
int main(){   
  unsigned char i;

    scanf("%c", &i);
    getchar();

    printf("The decimal representation is: %d\n", i);
    printf("The binary representation is: ");

    int idx=0, mask= 128;				    //10000000

    while(idx < 8){
   						 //using bitwise operator &
   					 //i & mask +-= i & 10000000 then 01000000....
        if(!(i & mask))
          printf("0");
        else
          printf("1");
       						 //shifting
        mask = mask>>1;
        idx++;
    }

    printf("\n");

    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("After setting the bits: ");
    set3bits(i, x, y, z);
    printf("\n");

  return 0;
}