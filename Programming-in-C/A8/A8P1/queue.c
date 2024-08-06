/*
CH-230-A
A8_P1.c
m.chahi@jacobs-university.de
*/

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>


void init_queue(Queue *pq){
    
     pq->front = pq->rear = NULL;
     pq->items = 0;
}


int queue_is_empty(const Queue *pq)
{
	if (pq->front == pq->rear == 0 ) 
            return 1
         else
            return 0 
}

int queue_item_count(const Queue *pq){

     return pq->items;
}

int queue_is_full(const Queue *pq){

     if(pq->rear==pq->front-1)
       return 1;
     else return 0;
     
}

int enqueue(Item item, Queue *pq){

   if(queue_is_full(pq))
      return -1;

 struct node* newel;

    newel = ( struct node *) malloc ( sizeof ( struct node ));
    if(!newel){
        printf("Error Allocating memory");
        return -1;}

    newel->item = item;
    newel->next = NULL;

    if(queue_is_empty(pq)){
        pq->front  =  newel;
    }
    else{
        pq->rear->next = newel;
    }

    pq->rear = newel;
    pq->items++;

 return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	 // add missing stuff
         return 0;


}
void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}