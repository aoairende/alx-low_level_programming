#include "main.h"

/**
 * binary_to_uint - Entry point.
 *
 * Description: Write a function that converts a binary number to
 * an unsigned integer.
 *
 * @b: Points to a string of characters, 0 and 1.
 *
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;

	/*check if array is null or empty*/
	if (!b)
		return (0);

	/*Loops through each character of the array until it encounters a null*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
