#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Write a program that adds positive numbers.
 *
 * Print the result, followed by a new line.
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 * You can assume that numbers and the addition of all the numbers
 * can be stored in an int.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);

		if (*flag)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
