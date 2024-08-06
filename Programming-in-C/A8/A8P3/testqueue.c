/*
CH-230-A
A8_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "queue.h"
#include <stdio.h>

int main(){

	char c;
	Queue line;
	Item temp;
	
	initialize_queue(&line);
	
	while (((c = getchar()) != EOF) && (c != 'q'))
	{
		switch (c){
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
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

			case 'p':
				printq(line);
				break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, q to quit:");
		}
	}	
	empty_queue(&line);
	return 0;
}
