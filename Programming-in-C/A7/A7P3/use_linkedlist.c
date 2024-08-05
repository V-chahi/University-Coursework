/*
CH-230-A
A7_P3.c
m.chahi@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
  char c;
  int a,b;

struct list *linkedlist=NULL;

do
  {
    scanf("%c",&c);

    switch (c){
    case 'a':
        scanf("%d",&a);
        linkedlist=push_back(linkedlist,a);
        break;

    case 'b':
        scanf("%d",&b);
        linkedlist=push_front(linkedlist,b);
        break;

    case 'p':
        print_list(linkedlist);
        break;

    case 'r':
        linkedlist=remov(linkedlist);
        break;

    case 'q':
        freelist(linkedlist);

    default:
        break;
    }
    
  } while (c !='q');
return 0;
}