#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
