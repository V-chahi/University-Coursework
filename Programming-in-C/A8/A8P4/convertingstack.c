/*
CH-230-A
A8_P4.c
m.chahi@jacobs-university.de
*/

#include "stack.h" 
#include <stdio.h>
#include <stdlib.h>


int main(){

    unsigned int n;
    scanf("%d",&n);

    struct stack *list;
    list = (struct stack *)malloc(sizeof(struct stack));
    unsigned temp = n;
    while (n != 0){

        push(list,n %2);
        n=n / 2;
    
    }
    printf("The binary representation of %d is ",temp);
    empty(list);
    return 0;
}