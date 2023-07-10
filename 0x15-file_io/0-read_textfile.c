#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Entry point.
 *
 * Description: Write a function that reads a text file and prints
 * it to POSIX stdout.
 *
 * @filename: A pointer to the name of the file.
 *
 * @letters: The number of letters the function should output.
 *
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*Allocates memory for the buffer to store the contents of the file*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(o, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open);

	return (write);
}
