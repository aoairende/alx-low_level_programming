#include "main.h"

/**
 * puts_half - Entry point
 * @str: char to check
 *
 * Description: Write a function that prints half of a string,
 * followed by a new line.
 * Prototype: void puts_half(char *str);
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
