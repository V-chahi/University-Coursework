/*
CH-230-A
A7_P7.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  char c;
  int i;

  struct stack* my_stack = NULL;
  my_stack = init(my_stack);

    while(1){
       scanf("%c", &c);
       getchar();
      
         switch (c){
            case 's':
                scanf("%d", &i);
                getchar();
                my_stack = push(my_stack, i);
                break;
    
            case 'p':
                my_stack = pop(my_stack);
                break;
            
            case 'e':
                my_stack = empty(my_stack);
                break;
    
            case 'q':
                printf("Quit\n");
                exit(1);
                break;
            
            default:
                break;
        }
    }
    return 0;
}