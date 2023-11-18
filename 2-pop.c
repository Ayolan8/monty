#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * 2-pop - removes the element at the top of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: nothing
 */
void 2-pop(stack_t **head, unsigned int kounta)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", kounta);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}