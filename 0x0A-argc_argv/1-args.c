#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the number of arguments
 * passed into it.
 * Your program should print a number, followed by a new line.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
