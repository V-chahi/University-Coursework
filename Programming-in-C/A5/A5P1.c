/*
CH-230-A
a5_p1.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, char ch){
    int i, j;
    for(i = n; i >= 1; --i){
        for(j = 1; j <= i; ++j){
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main(){

    int n;
    char ch;
    scanf("%d",&n);
    getchar();
    scanf("%c",&ch);

    print_form(n,ch);

    return 0;
}