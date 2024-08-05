/*
CH-230-A
A7_P4.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void (* func_arr [4]) ( char s[60] ) = { func1 , func2 , func3, func4 };


int main(){
    char s[60];
    char c;

    fgets(s, sizeof(s), stdin);
    s[strlen(s)-1] = '\0';

    while(1){

        scanf("%c", &c);
        getchar();


        func_arr[(int)c-49](s);

    }

    return 0;
}

void func1(char s[60]);
void func1(char s[60]){

    for(int i = 0; i < strlen(s); i++){
        printf("%c", toupper(s[i]));
    }
 printf("\n");
}

void func2(char s[60]);
void func2(char s[60]){

    for(int i = 0; i < strlen(s); i++){
        printf("%c", tolower(s[i]));
    }
 printf("\n");
}

void func3(char s[60]);
void func3(char s[60]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 97 && s[i] <= 122)
            printf("%c", toupper(s[i]));
        else
            printf("%c", tolower(s[i]));
    }
    printf("\n");
}

void func4(char s[60]);
void func4(char s[60]){
  exit(1);
}