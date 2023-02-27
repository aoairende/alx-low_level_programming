#include "main.h"

/**
 * _puts - Entry point
 * @str: the string
 *
 * Decsription: Write a function that prints a string, followed by
 * a new line, to stdout.
 * Prototype: void _puts(char *str);
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
