#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * pchar_func - function to print the char at the top of the stack,
 * @head: stack head
 * @kounta: line number
 * Return: nothing
 */
void pchar_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;

	
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((temp->n > 127) || (temp->n < 0))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}