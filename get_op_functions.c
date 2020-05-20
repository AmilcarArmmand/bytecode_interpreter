#include "monty.h"

/**
 * get_op_func - a function that selects the function to perform the operation
 * @s: the operator passed as an argumant
 *
 * Return: the pointer to the function that performs the operation or NULL
 */
int (*get_op_func(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", op_add},
		{"pall", op_sub},
		{"pint", op_mul},
		{"pop", op_div},
		{"swap", op_mod},
		{"add", op_mod},
		{"nop", op_mod},
		{"sub", op_mod},
		{"div", op_mod},
		{"mul", op_mod},
		{"mod", op_mod},
		{"pchar", op_mod},
		{"pstr", op_mod},
		{"rotl", op_mod},
		{"rotr", op_mod},
		{"stack", op_mod},
		{"queue", op_mod},
		{"swap", op_mod},
		{"swap", op_mod},
		{"swap", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (!(strcmp(opcode, ops[i].opcode)))
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}
