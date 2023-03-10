#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Write a program that multiplies two numbers.
 *
 * Your program should print the result of the multiplication,
 * followed by a new line.
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer.
 * If the program does not receive two arguments, your program should
 * print Error, followed by a new line, and return 1.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
