#include "monty.h"

 arg_t *arguments = NULL;

/**
 * main - Entry point of the program
 * @argc: this will be the number of command line arguments
 * @argv: This is a pointer to an array of stings containing
 * the command line of arguments.
 * Description: print alphabet in lowercase using putchar
 *
 * Return: 0 (Sucess)
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_arguments(argc);
	intialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		printf("%s", arguments->line);
	}

	return (0);
}
