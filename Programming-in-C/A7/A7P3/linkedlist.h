/*
CH-230-A
A7_P3.h
Amine Chahi
m.chahi@jacobs-university.de
*/
								//struct declaration
struct list{
    int data;
    struct list *ptr;
};
							//func prototyping

struct list * push_front (struct list * my_list,int value ) ;
struct list *push_back(struct list *my_list, int value);
struct list *remov(struct list *my_list);
void print_list (struct list * my_list) ;
void freelist(struct list *my_list);;