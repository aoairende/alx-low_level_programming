#include "main.h"

/**
 * get_bit - Entry point.
 *
 * Description: Write a function that returns the value of a bit at a
 * given index.
 *
 * @n: To retrieve bits.
 *
 * @index: To check position of the bits.
 *
 * Return: The value of the bit at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	y = n & x;
	if (y == x)
		return (1);

	return (0);
}
