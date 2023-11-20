#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * div_func - function to divide the top two elements of the stack.
 * @head: head of the stack
 * @kounta: line number
 * Return: nothing
 */
void div_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;
	int length, val;

    length = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	val = temp->next->n / temp->n;
	temp->next->n = val;
	*head = temp->next;
	free(temp);
}