#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
