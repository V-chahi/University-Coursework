/*
CH-230-A
A8_P4.c
m.chahi@jacobs-university.de
*/

struct stack
{
    unsigned int count;
    int array[12];
};

void push(struct stack *list,int n);
void pop(struct stack *list);
void empty(struct stack *list);

void isEmpty(struct stack *list);