#include "main.h"

/**
 * _puts - Entry point
 * @s: the string
 *
 * Decsription: Write a function that prints a string, followed by
 * a new line, to stdout.
 * Prototype: void _puts(char *s);
 *
 * Return: the length of the string
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
