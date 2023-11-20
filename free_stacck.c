#include "monty.h"
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * free_stack - program to delete a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
