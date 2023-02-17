#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a C program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden).
 *
 * All your code should be in the main function.
 *
 * You can only use putchar twice in your code.
 *
 * Return: Always 0
 */

int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}
