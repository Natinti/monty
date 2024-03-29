#include "monty.h"

/**
 * initialize_arguments - initialize a pointer to the arg_s struct
 */
void initialize_arguments()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->line = NULL;
}
