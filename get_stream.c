#include "monty.h"

/**
 * get_stream_failed - this will handle the error when file reading fails
 * @fileName: the name of the file that failed to open
 */

void get_stream_failed(char *fileName)
{
	fprintf(stderr, "Error: Can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - this gets the stream for reading from the specify file
 * @fileName: Name of the file to open and set as stream.
 */

void get_stream(char *fileName)
{
	FILE *fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		get_stream_failed(fileName);

	arguments->stream = fopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		get_stream_failed(fileName);
	}
}
