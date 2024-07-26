/*
CH-230-A
a4_p2.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){

char string[50];
fgets(string, sizeof(string), stdin);

for(int i=0; i<(strlen(string)-1); i++){
    if(i>(strlen(string)-3))
        printf("%c", string[i]);
    else{
        printf("%c\n %c\n", string[i], string[i+1]);
        i= i+1;}
}
printf("\n");

return 0;
}