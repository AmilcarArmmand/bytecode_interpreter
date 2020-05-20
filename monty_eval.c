#include "monty.h"

/**
 * eval_monty - the entry point of the Monty Bytecode Interpreter
 * @argc: the number of arguments passed to main
 * @argv: pointer to an array of pointers to arguments passed to main
 *
 * Return: (EXIT_SUCCESS) for success or (EXIT_FAILURE) for error
 */
int eval_monty(FILE *montyfile_fd)
{
	char *line;
	stack_t *stack;
	int exit_code;

	exit_code = EXIT_SUCCESS;

	exit_code = eval_monty(montyfile_fd);


/* getline  */
/* if line and *line == NULL, free line and return error status */
/* tokenize line into op_tokens */
/* if tokens == NULL  */


	free(line);
	return (exit_code);
}
