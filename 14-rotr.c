#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 *rotr_func - rotates the stack to the bottom
 *@head: stack head
 *@kounta: line_number
 *Return: nothing
 */
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int kounta)
{
	stack_t *temp = *head;

	if ((*head == NULL) || (*head)->next == NULL)
		return;
	while (temp->next)
		temp = temp->next;
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}