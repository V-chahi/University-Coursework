/*
CH-230-A
A7_P1.h
m.chahi@jacobs-university.de
*/

struct list
{
    int data;
    struct list *ptr;
};

void *push_front (struct list * my_list, int value ) ;
struct list *push_back(struct list *my_list, int value);
struct list *remov(struct list *my_list);
void print_list (struct list * my_list) ;
void freelist(struct list *my_list);;