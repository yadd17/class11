#include <stdio.h>
#include "queue.h"

Queue initQueue()
{
	Queue queue;

	queue.head = NULL;
	queue.tail = NULL;

	return queue;
}

void deleteQueue(Queue* queue)
{
	Node* current = queue->head;
	while(current != NULL)
	{
		Node* toRemove = current;
		current = current->next;
		delete toRemove;
	}
}


void push(Queue* queue, int value)
{	
	Node* node = new Node();
	node->value = value;
	node->next = NULL;
	if(queue->head == NULL)
	{
		queue->tail = queue->head = node;
	}
	else
	{
		queue->tail->next = node;
		queue->tail = node;
	}
}


void printQueue(Queue *queue)
{
	Node* current = queue->head;
	printf("start print queue\n");
	while(current != NULL)
	{
		printf("%d\n", current->value);
		current = current->next;
	}	
} 


int popQueue(Queue *queue)
{	
	if (queue->head == NULL)
	{
		return -1;	
	}	

	
	int value = queue->head->value;
	Node* toremove = queue->head;
	queue->head = queue->head->next;
	delete toremove;

	if (queue->head == NULL) 
	{
		queue->tail = NULL;
	}	
	return value;
	
}

