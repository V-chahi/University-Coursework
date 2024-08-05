/*
CH-230-A
a7_P7.h
m.chahi@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
 
							//Struct prototyping
struct stack {
   unsigned int count;
   int a[12];
};

						//Function prototyping
struct stack* init(struct stack *my_stack);
struct stack* pop(struct stack *my_stack);
struct stack* push(struct stack *my_stack, int value);
struct stack* empty(struct stack *my_stack);