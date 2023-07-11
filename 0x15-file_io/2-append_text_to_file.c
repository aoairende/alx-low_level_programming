#include "main.h"

/**
 * _strlen - Entry point.
 *
 * Description: Write a function that appends text at the end of a file.
 *
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */

size_t _strlen(char *str)
{
	size_t u;

	for (u = 0; str[u]; u++)
		;
	return (u);
}

/**
 * append_text_to_file - Entry point.
 *
 * Description: Appends a text at the end of a file.
 *
 * @filename: Name of the file.
 *
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*fd - File descriptor, l - strlen varaiable. */
	int fd;
	ssize_t l;

	if (filename == NULL)
		return (-1);

	/* Open file, write-only file and append file. */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		l = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (l == -1)
		return (-1);
	return (1);
}
