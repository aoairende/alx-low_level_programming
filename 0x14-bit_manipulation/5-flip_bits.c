#include "main.h"

/**
 * flip_bits - Entry point.
 *
 * Description: Write a function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: The first unsignd long integer.
 *
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		x = y >> a;
		if (x & 1)
			b++;
	}

	return (b);
}
