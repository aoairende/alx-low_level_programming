#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: int to check
 * @n: int to check
 *
 * Description: Write a function that prints n elements of an
 * array of integers, followed by a new line.
 * Prototype: void print_array(int *a, int n);
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are
 * stored in the array
 * You are allowed to use printf
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
