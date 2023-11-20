#include "monty.h"


/**
 * pstr_func - function to print the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @kounta: line_number
 * Return: no return
 */
void pstr_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;
	(void)kounta;

	while (temp != NULL)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}