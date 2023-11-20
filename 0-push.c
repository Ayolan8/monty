#include "monty.h"

/**
 * push_func - program to add node to the stack
 * @head: stack head
 * @kounta: line number
 * Return: nothing
 */
void push_func(stack_t **head, unsigned int kounta)
{
	int x; 
    int y; 
    int flg;

    y = 0;
    flg = 0;
	if (comp.args)
	{
		if (comp.args[0] == '-')
			y++;
		for (; comp.args[y] != '\0'; y++)
		{
			if (comp.args[y] > 57 || comp.args[y] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", kounta);
			fclose(comp.my_file);
			free(comp.contents);
			free_stack(*head);
			exit(EXIT_FAILURE); 
        }
    }
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", kounta);
		fclose(comp.my_file);
		free(comp.contents);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	x = atoi(comp.args);
	if (comp.lif == 0)
		addnode(head, x);
	else
		addqueue(head, x);
}