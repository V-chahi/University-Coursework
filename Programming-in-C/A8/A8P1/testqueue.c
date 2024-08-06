/*
CH-230-A
A8_P1.c
m.chahi@jacobs-university.de
*/

#include "queue.h"
#include <stdio.h>

int main(){
 
  Item temp;
  char c;
	
  Queue line;
	
  initialize_queue(&line);
	
      while ((c != 'q') && ((c = getchar()) != EOF)){

		switch (c){
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line)){
					printf("Pushing %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, q to quit:");
		}
	}	
	empty_queue(&line);
  return 0;
}