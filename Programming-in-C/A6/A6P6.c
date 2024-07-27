/*
CH-230-A
a6_p6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main(){
  unsigned char i;

    scanf("%c", &i);
    getchar();

    printf("The decimal representation is: %d\n", i);
    printf("The binary representation is:%b\n", i ");

    int idx=0, mask= 128;//10000000

    while(idx<8){                                        //using bitwise operator &
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
 return 0;
}
