#include "stdio.h"

struct Node
{
	int value;
	Node *next;
};

struct Queue
{
	Node *tail;
	Node *head;
};

Queue initQueue();
void deleteQueue( Queue*);

void push(Queue *queue, int value);

void printQueue(Queue *queue);

int popQueue(Queue *queue);
