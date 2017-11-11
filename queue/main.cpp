#include <stdio.h>
#include "queue.h"

int main()
{
	Queue q;
	q = initQueue();
	printQueue(&q);
	push(&q, 2);
	push(&q, 3);
	push(&q, 7);
	printQueue(&q);
	printf("value = %d\n", popQueue(&q));
	printf("value = %d\n", popQueue(&q));
	printf("value = %d\n", popQueue(&q));
	printf("value = %d\n", popQueue(&q));
	printQueue(&q);
	push(&q, 2);
	printQueue(&q);
	deleteQueue(&q);
}

