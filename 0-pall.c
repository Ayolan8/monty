#include "header.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * pall_function - prints the element in the stack
 * @head: head of the stack
 * @kounta: silent
 * Return: nothing
 */
void pall_function(stack_t **head, unsigened int kounta)
{
	(void)kounta;
	stack_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
