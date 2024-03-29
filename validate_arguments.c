#include "monty.h"

/**
 * validate_arguments - this functions checks the number
 * of command lines of arguments in the program
 * @argc: The number of command line arguments
 */

void validate_arguments(int argc)
{
	if (argc == 2)
		return;
	
	fprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
