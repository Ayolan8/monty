#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 1-pint - function to print the top of the stack
 * @head: head of the stack
 * @counter: number of line
 * Return: nothing
 */
void 1-pint(stack_t **head, unsigned int kounta)
{
    stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", kounta);
		fclose(bus.file);
		free(bus.content);
		free_stack(temp);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}