/*
CH-230-A
A8_P5.c
m.chahi@jacobs-university.de
*/


struct stack{
   unsigned int count;
   char array[20][30]; 
};

void push(char temp[],struct stack *list);
char *pop(struct stack *list);