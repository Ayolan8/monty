#include "monty.h"

/**
 * execute - function to execute the opcode
 * @stack: head of the linked list - stack
 * @kounta: line counter
 * @file: poiner to monty file
 * @contents: line content
 * Return: nothin
 */
int execute(char *contents, stack_t **stack, unsigned int kounta, FILE *my_file)
{
	instruction_t opst[] = {
		{"push", push_fumc}, {"pall", pall_function}, {"pint", 1-pint},
		{"pop", 2-pop},
		{"swap", swap_function},
		{"add", add_func},
		{"nop", nop_function},
		{"sub", sub_func},
		{"div", div_func},
		{"mul", mul_func},
		{"mod", mod_func},
		{"pchar", pchar_func},
		{"pstr", pstr_func},
		{"rotl", rotl_func},
		{"rotr", rotr_func},
		{"queue", queue_func},
		{"stack", stack_func},
		{NULL, NULL}
	};
	unsigned int x;
	char *operator;

    x = 0;
	operator = strtok(contents, " \n\t");
	if (op && operator[0] == '#')
		return (0);
	comp.args = strtok(NULL, " \n\t");
	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{opst[x].f(stack, kounta);
			return (0);
		}
		i++;
	}
	if (op && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", kounta, operator);
		fclose(my_file);
		free(contents);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

