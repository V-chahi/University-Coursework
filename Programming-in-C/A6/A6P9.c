/*
CH-230-A
a6_p9.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    int xcp;
    struct list *ptr; 
}; 

				          		//remove 1st elem of the list 
struct list *remove_element(struct list *my_list) {
  if (!my_list){
    return my_list;
   }
  my_list -> xcp = 0;
    return my_list -> ptr; 
}
 
										//Pushing to head
struct list *push_front(struct list *my_list, int value) {
  struct list *newel;
  newel = (struct list *)malloc(sizeof(struct list));
    if (!newel){
        printf(" Error allocating memory \n");
        return my_list;
    }
  newel -> xcp = value
  newel -> ptr = my_list;
   return newel;
}

struct list *insert_element(struct list *my_list, int pos, int value){
  if(pos < 0){
    printf("Invalid position\n");
return my_list;
  }

struct list *cursor, *storage, *result_list;
 result_list = (struct list *)malloc(sizeof(struct list));
   
   if (!result_list){
     printf(" Error allocating memory \n");
     return my_list;
   }
    if (pos == 0){
      result_list -> xcp = value;
      result_list -> ptr = result_list;
    }

    cursor = my_list;


    for (int i = 0; i < pos - 1; i++){
        if(!cursor->ptr){
          printf("Invalid position\n");
          return my_list;
        }
        else{
        cursor = cursor -> ptr;
        }
    }

   								 //Adding the new element 
    storage = cursor -> ptr;    
    result_list -> xcp = value;
    result_list -> ptr = storage;
    cursor -> ptr = result_list;

 return my_list;


}

struct list *rev(struct list *my_list){
  struct list *cursor, *rev_List = NULL;

    cursor = (struct list *)malloc(sizeof(struct list));

    if (!cursor){
        printf(" Error allocating memory\n");
        return my_list;
    }

    for(cursor = my_list; cursor != NULL; cursor = cursor -> ptr){
        rev_List = push_front(rev_List, cursor -> xcp);
    }

    return rev_List;

}
 
struct list *push_back(struct list *my_list, int val){ 									//Pushing to tail
  struct list *cursor, *newel;
  cursor = my_list;

  newel = (struct list *)malloc(sizeof(struct list));
    if (!newel){
      printf(" Error allocating memory \n");
      return my_list;
    }

    newel -> xcp = val;
    newel -> ptr = NULL;

    if (!my_list)
      return newel;

    while (cursor->ptr){
        cursor = cursor -> ptr;
    }

    cursor -> ptr = newel;

 return my_list;
}
 
void print_list (struct list * my_list){
    struct list *p;

    for (p = my_list; p != NULL; p = p->ptr){
        printf("%d ", p -> xcp);
    }
    printf("\n");
}
 
void freelist(struct list *my_list){
  struct list *nextelem;
  while (my_list != NULL){
    nextelem = my_list -> ptr;
    free(my_list);
    my_list = nextelem;
  }
}
 
int main(){
  char c;
  int a, b, n, val;
  struct list *linkedlist = NULL;
    											// Prompting user to input choices
    do{
      scanf("%c",&c);
      switch (c){

          case 'a':
                scanf("%d",&a);
                linkedlist = push_back(linkedlist,a);
                break;

          case 'b':
                scanf("%d",&b);
                linkedlist = push_front(linkedlist,b);
                break;

          case 'r':
                linkedlist = remove_element(linkedlist);
                break;

          case 'p':
                print_list(linkedlist);
                break;

          case 'I':												//add at a specific position
                scanf("%d", &n);
                scanf("%d", &val);
                linkedlist = insert_element(linkedlist, n, val);

                break;
          case 'R':
             linkedlist = rev(linkedlist);                		              			 //reverse list  
              
 	        break;
          case 'q':
                freelist(linkedlist);

            default:
              break;
      }
  									  //user inputs q breaks inf loop
    } while (c !='q');    

 return 0;
}