#include "main.h"

/**
 * _abs - Entry point
 * @n: The integer to be computed.
 *
 * Decsription: Write a function that computes the absolute value of an
 * integer.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
