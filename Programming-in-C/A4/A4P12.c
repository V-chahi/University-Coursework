/*
CH-230-A
a4_p12.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e){
    for(int i = 0; i<strlen(str); i++){
      if(str[i] == c)
        str[i] = (char)e;
    }
}

int main(){

char *str=malloc(80*sizeof(char));
char c, e;
int a = 1;

    while(a){
        printf("enter a string:\n");
        fgets(str, sizeof(str), stdin);

         for(int i=0; i<80; i++){
            if (str[i]=='p' && str[i-1]=='o' && str[i-2]=='t' && str[i]=='s')
                {free(str);
                return 0 ;
            }

         }

        printf("enter the character to be replaced:\n");
        scanf("%c", &c);
        getchar();

        printf("enter the replacing character:\n");
        scanf("%c", &e);
        getchar();

        printf("You have chosen to replace %cs by %c in the string: %s\n", c, e, str);
        replaceAll(str, c, e);

        printf("the string after replacement is: %s", str);
    }

    free(str);

return 0;
}