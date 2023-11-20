#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

comp_t comp = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *contents;
    unsigned int kounta;
	FILE *my_file;
	size_t size;
    stack_t *stack;
	ssize_t read_line;

    stack = NULL;
    kounta = 0;
    read_line = 1;
    size = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
    
	my_file = fopen(argv[1], "r");
	comp.my_file = my_file;

	if (!my_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		contents = NULL;
		read_line = getline(&contents, &size, my_file);
		comp.contents = contents;
		kounta++;
		if (read_line > 0)
		{
			execute(contents, &stack, kounta, my_file);
		}
		free(contents);
	}
	free_stack(stack);
	fclose(my_file);
	return (0);
}