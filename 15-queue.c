#include "monty.h"

/**
 * queue_func - prints the top
 * @head: stack head
 * @kounta: line number
 * Return: nothin
 */
void queue_func(stack_t **head, unsigned int kounta)
{
	(void)head;
	(void)kounta;
	comp.lif = 1;
}

/**
 * addqueue_func -function to add node to the tail stack
 * @x: new value
 * @head: head of the stack
 * Return: nothing
 */
void addqueue_func(stack_t **head, int x)
{
	stack_t *newNode;
    stack_t *ptr;

	ptr = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
		printf("Error\n");
	newNode->n = x;
	newNode->next = NULL;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		ptr->next = newNode;
		newNode->prev = ptr;
	}
}