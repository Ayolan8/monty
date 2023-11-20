#include "monty.h"

/*
 *sub_func - subtracts the top element of the stack from the second top element of the stack
 *@head: head of the stack
 *@kounta: line number
 *Return: nothing
 */
void sub_func(stack_t **head, unsigned int kounta)
{
	stack_t *temp = *head;
	int sub;
    int nodes = 0;

	while (temp)
    {
        temp = temp->next;
        nodes++;
    }
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}