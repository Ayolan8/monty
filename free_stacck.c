#include "monty.h"

/**
 * free_stack - program to delete a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
