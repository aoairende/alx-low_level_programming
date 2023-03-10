#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back.
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1.
 * you should use atoi to parse the parameter passed to your program.
 * If the number passed as the argument is negative, print 0,
 * followed by a new line.
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
