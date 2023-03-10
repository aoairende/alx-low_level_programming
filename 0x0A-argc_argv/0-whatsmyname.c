#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without
 * having to compile it again.
 * You should not remove the path before the name of the program.
 *
 * @argc: argument count
 * @argv: arguments
 *
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
