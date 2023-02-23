#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Prototype: void print_most_numbers(void);
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 *
 * Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
