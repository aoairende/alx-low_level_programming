#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * @x:int
 * @y:int
 *
 * Description: Write a function that returns the value of x raised to
 * the power of y.
 *
 * Prototype: int _pow_recursion(int x, int y);
 * If y is lower than 0, the function should return -1
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
