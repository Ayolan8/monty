#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * f_pall - function to print the stack
 * @head: stack head
 * @kounta: silent
 * Return: nothing
*/
void pall_function(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;
	(void)kounta;

	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}