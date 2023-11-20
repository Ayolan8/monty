#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct comp_s
{
	char *args;
	FILE *my_file;
	char *contents;
	int lif;
}  comp_t;
extern comp_t comp;

void push_node(stack_t **head, int n);
void pall_function(stack_t **head, unsigned int kounta);
void 1-pint(stack_t **head, unsigned int kounta);
void 2-pop(stack_t **head, unsigned int kounta);
void swap_function(stack_t **head, unsigned int kounta);
void add_func(stack_t **head, unsigned int kounta);
void nop_function(stack_t **head, unsigned int kounta);
void sub_func(stack_t **head, unsigned int kounta);
void div_func(stack_t **head, unsigned int kounta);
void mul_func(stack_t **head, unsigned int kounta);
void mod_func(stack_t **head, unsigned int kounta);
void pchar_func(stack_t **head, unsigned int kounta);
void pstr_func(stack_t **head, unsigned int kounta);
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int kounta);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int kounta);
void queue_func(stack_t **head, unsigned int kounta);
void addqueue_func(stack_t **head, int x);
void stack_func(stack_t **head, unsigned int kounta);
int execute(char *contents, stack_t **stack, unsigned int kounta, FILE *my_file);
void free_stack(stack_t *head);


#endif
