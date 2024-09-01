#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int substitute(char *s,char c){
    int count = 0;
    int i = 0;
    char *ptr = s;

    while( *(ptr+i) != '\0'){
       if( *(ptr+i) >= 97 && *(ptr+i) <= 122) {
         if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
           *(ptr+i) = c;
           count++;
         }
       }

     i++;
    
    } 
  printf("%s",s);
 return count;
}

int main(){

    char c;
    char *sub;
    sub=malloc(sizeof(char) * 50);
    fgets(sub,50,stdin);
    sub[strlen(sub)-1] ='\0';

    scanf("%c",&c);
    substitute(sub,c);

    printf("the result\n");
    printf("nr of subs %d",substitute(sub,c));
 
return 0;
}