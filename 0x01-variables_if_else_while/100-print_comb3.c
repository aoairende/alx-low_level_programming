#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible different
 * combinations of two digits.
 *
 * Numbers must be separated by ,, followed by a space.
 *
 * The two digits must be different.
 *
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 *
 * Print only the smallest combination of two digits.
 *
 * Numbers should be printed in ascending order, with two digits.
 *
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden).
 *
 * You can only use putchar five times maximum in your code.
 *
 * You are not allowed to use any variable of type char.
 *
 * All your code should be in the main function.
 *
 * Return: Always 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
