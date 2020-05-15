#include "monty.h"

/**
 * main - the entry point of the Monty Bytecode Interpreter
 * @argc: the number of arguments passed to main
 * @argv: pointer to an array of pointers to arguments passed to main
 *
 * Return: (EXIT_SUCCESS) for success or (EXIT_FAILURE) for error
 */
int main(int argc, char **argv)
{
	FILE montyfile_fd;
	int exit_code;

	montyfile_fd = NULL;
	exit_code = EXIT_SUCCESS;

	if (agrc != 2)
		return (EXIT_FAILURE); /* change later */

	montyfile_fd = fopen(argv[1], O_RDONLY);
	if (montyfile_fd == NULL)
		return (EXIT_FAILURE); /* change later */

	exit_code = eval_monty(montyfile_fd);
	fclose(montyfile_fd);

	return (exit_code);
}
