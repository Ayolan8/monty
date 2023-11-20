#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * mul_func - function to multiply the top two elements of the stack.
 * @head: stack head
 * @kounta: line number
 * Return: nothing
 */
void mul_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp *head;
	int length, val;

	length = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	val = temp->next->n * temp->n;
	temp->next->n = val;
	*head = temp->next;
	free(temp);
}