#include "main.h"

/**
 * _puts - Entry point
 * @str: the string
 *
 * Decsription: Write a function that prints a string, followed by
 * a new line, to stdout.
 * Prototype: void _puts(char *str);
 *
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
