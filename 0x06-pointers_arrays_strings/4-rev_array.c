#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements in the array
 *
 * Description: Write a func that reverses the content of an array of integers.
 *
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 *
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
