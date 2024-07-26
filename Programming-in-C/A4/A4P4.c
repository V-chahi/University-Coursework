/*
CH-230-A
a4_p4.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>
#include<string.h>

int count_consonants(char str[100]){
 int c=0;
    for(int i=0; str[i]!='\0'; i++){

         if( str[i]== 'B'   || str[i]== 'C' ||   str[i]== 'D' ||  str[i]== 'F' ||str[i]== 'G' ||
str[i]== 'H' ||str[i]== 'J' ||str[i]== 'K' ||str[i]== 'L' ||
str[i]== 'M' ||str[i]== 'N' ||str[i]== 'P' ||str[i]== 'Q' ||str[i]== 'R' ||
str[i]== 'S' ||str[i]== 'T' ||str[i]== 'V' ||str[i]== 'W' ||str[i]== 'X' ||
str[i]== 'Y' ||str[i]== 'Z' ||str[i]== 'b' ||str[i]== 'c' || str[i]== 'd'||
str[i]== 'f' ||str[i]== 'g' ||str[i]== 'h' ||str[i]== 'j' ||str[i]== 'k' ||
str[i]== 'l' ||str[i]== 'm' ||str[i]== 'n' ||str[i]== 'p' ||str[i]== 'q' ||
str[i]== 'r' ||str[i]== 's' ||str[i]== 't' ||str[i]== 'v' ||str[i]== 'w' ||
str[i]== 'x' ||str[i]== 'y' ||str[i]== 'z')
        c++;
         else if(str[i]=='\n')
             break;
    }
return c;
}
int main(){
char str[100];
 
  while(1){
    fgets(str,sizeof(str),stdin);

     if(str[0]=='\n'){
        return 0;
     }

  printf("Number of consonants=%d\n",count_consonants(str));
  }
  return 0;
}