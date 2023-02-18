#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden).
 *
 * All your code should be in the main function.
 *
 * You can only use putchar three times in your code.
 *
 * Return: Always 0
 */

int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
