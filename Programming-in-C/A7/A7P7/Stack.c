/*
CH-230-A
A7_P7.c
m.chahi@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct stack* init(struct stack *my_stack){

    my_stack = (struct stack *) malloc(sizeof (struct stack));
    my_stack->count = 0;
    my_stack->a[0] = 0;
    return my_stack;
}

struct stack* push(struct stack *my_stack, int value){

   if(my_stack->count == 12){							//Overflow Condition
       printf("Pushing Stack Overflow\n");
       return my_stack;
   }  
 
   my_stack->count++;
   my_stack->a[my_stack->count] = value; 				//Pushing Successfully
   printf("Pushing %d\n", value);
   return my_stack;
}

struct stack* pop(struct stack *my_stack){
   if(my_stack->count == 0){					  //Underflow Condition
       printf("Popping Stack Underflow\n");
       return my_stack;
   }
							      //Popping Successfully
   printf("Popping %d\n", my_stack->a[my_stack->count]);
   (my_stack->count)--;
   return my_stack;
}

//empty a stack
struct stack* empty(struct stack *my_stack){
    printf("Emptying Stack ");
    while(my_stack->count > 0){
        printf("%d ", my_stack->a[my_stack->count]);     //Out/ elements of stack
        (my_stack->count)--;
    }
    printf("\n");
    return my_stack;
}