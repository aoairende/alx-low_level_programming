#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times
 *
 * Description: Write a function that draws a straight line in the terminal.
 * Prototype: void print_line(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
