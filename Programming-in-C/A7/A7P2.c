/*
CH-230-A
a7_p2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
    char data;
    struct list *fptr;
    struct list *bptr;
    }LIST;

LIST* removeelem(LIST* linklist,char c){

    LIST* cursor = NULL;
    LIST* tail =NULL;
    LIST* head = NULL;
    cursor = linklist;
    int bool=0;

  while (cursor != NULL){
    if (cursor -> data == c){
      bool=1;
      if (cursor ->bptr == NULL){
           cursor = cursor -> fptr;
           cursor -> bptr = NULL;
           linklist = cursor;
      }
      elif (cursor ->fptr == NULL){
            cursor = cursor ->bptr;
            cursor -> fptr = NULL;
      }
      else{
                back = cursor ->bptr ;
                ahead = cursor ->fptr ;
                cursor = ahead;
                cursor -> bptr = back;
                cursor = back;
                cursor ->fptr = ahead;
                
      }
    }
        cursor = cursor -> fptr;
    }
    if (bool == 0)
    {
        printf("Element not in the list!\n");
    }
    return linklist;   
}



struct list* startoflist(LIST* linklist, char c){

    LIST* newelem;
    newelem = (struct list *) malloc (sizeof(struct list));

      if (!newelem){
        printf(" Error allocating memory \n");
        return linklist;
      }

    newelem -> bptr = NULL;
    newelem -> data = c;
    newelem -> fptr = linklist;

      if (!linklist){
        return newelem;
      }
      else{
        linklist -> bptr = newelem;
        return newelem;
      }
}

void printlist(LIST* linklist){

    LIST *p;
    for (p = linklist; p!= NULL; p = p->fptr){
        printf("%c ", p->data);
    }
    printf("\n");  
}

void reverse(LIST *linklist){

        LIST* cursor;
        cursor = linklist;
        while (cursor ->fptr != NULL){
            cursor = cursor->fptr;
        }
        LIST* back;
        for (back = cursor; back != NULL; back = back ->bptr){
            printf("%c ", back -> data);
        }
        printf("\n"); 
}


void freelist(LIST* linklist){

  LIST *nextelem;

    while (linklist != NULL){

        nextelem = linklist->fptr;
        free(linklist);
        linklist = nextelem;
    }
}


int main(){

  char c;
  int a;
  LIST *linklist = NULL;
    do
    {
        scanf("%d",&a);
        getchar();
        switch (a)
        {
        case 1:
            scanf("%c",&c);
            getchar();
            linklist = startoflist(linklist,c);
            break;

        case 2:
            scanf("%c",&c);
            getchar();
            linklist = removeelem(linklist,c);
            break;

        case 3:
            printlist(linklist);
            break;

        case 4:
            reverse(linklist);
            break;

        case 5:
            freelist(linklist);
            break;

        default:
            a=5;
            break;
        }
    } while (a != 5);
    return 0;
}