#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"

/**
 *rotl_func - function to rotate the stack to the top
 *@head: stack head
 *@kounta: line number
 *Return: nothing
 */
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int kounta)
{
	stack_t *temp, *ptr;

    temp = *head;

	if ((*head == NULL) || (*head)->next == NULL)
		return;
	ptr = (*head)->next;
	ptr->prev = NULL;

	while (temp->next)
	    temp = tmp->next;
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = ptr;
}