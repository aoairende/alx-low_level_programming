#include "main.h"

/**
 * create_file - Entry point.
 *
 * Description: Create a function that creates a new file.
 *
 * @text_content: is a NULL terminated string to write to the file.
 *
 * @filename: The new file to be created.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* Create file, read and write file and truncate file. */
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	/* If the open or write calls fail, return -1 */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
