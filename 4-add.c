#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_func - function to add the top two elements of the stack.
 * @head: stack head
 * @kounta: line number
 * Return: nothing
 */
void add_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;
	int length = 0, val;

	while (temp != NULL)
    {
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", kounta);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	val = temp->n + temp->next->n;
	temp->next->n = val;
	*head = temp->next;
	free(temp);
}