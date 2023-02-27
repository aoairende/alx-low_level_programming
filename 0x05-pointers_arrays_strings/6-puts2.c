#include "main.h"

/**
 * puts2 - Entrry point
 * @str: char to check
 *
 * Description: Write a function that prints every other character
 * of a string, starting with the first character, followed by a new line.
 * Prototype: void puts2(char *str);
 *
 * Return: 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
