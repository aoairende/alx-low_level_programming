#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 *
 * Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
