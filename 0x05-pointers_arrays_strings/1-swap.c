#include "main.h"

/**
 * swap_int - Entry point
 * @a: first int
 * @b: second int
 *
 * Description: Write a function that swaps the values of two integers.
 * Prototype: void swap_int(int *a, int *b);
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
