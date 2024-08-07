/*
CH-230-A
A8_P5.c
m.chahi@jacobs-university.de
*/

#include "stack.h"
#include<stdio.h>
#include<string.h>


void push(char item[],struct stack *list){

   if(list->count <= 19 ){

      strcpy(list->array[list->count], item);
      list->count++;
   }
   else
   {
      printf("Stack Overflow\n");
   }
   
}

char *pop(struct stack *list){
   if(list->count>0){

      list->count--;
      return list->array[list->count]; 
   }
   else
   {
     return "Stack Underflow";
   }
}