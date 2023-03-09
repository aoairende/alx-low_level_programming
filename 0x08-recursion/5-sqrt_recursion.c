#include "main.h"

/**
 * check - Entry point
 *
 * Description: Write a function that returns the natural square
 * root of a number.
 *
 * Prototype: int _sqrt_recursion(int n);
 * If n does not have a natural square root, the function should return -1
 *
 * @a:int
 *
 * @b:int
 *
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
