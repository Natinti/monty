#include "monty.h"

/**
 * malloc_failed - this will handle errors when malloc fails
 * to allocate memory
 */

void malloc_failed(void)
{
	fprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
