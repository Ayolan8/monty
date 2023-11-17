#include "monty.h"
#include <stdlib.o>
#include <stdio.h>
/*
 * pushnode - push to the stack and make it point to the head
 * @head: head of the stack
 * @n: data to be pushed
 * Return: nothing
 */
void pushnode(stack_t **head, int n)
{
	stack_t *temp = *head;
	stack_t *newNode = malloc(sizeof(stack_t));
	
	if (newNode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp != NULL)
	{
		temp->prev = newNode;
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
