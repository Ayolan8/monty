#include "monty.h"

/**
 * swap_function - function to add the top 2 elements of the stack.
 * @head: head of the stack
 * @kounta: line number
 * Return: nothing
 */
void swap_function(stack_t **head, unsigned int kounta)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	val = temp->n;
	temp->n = temp->next->n;
	temp->next->n = val;
}