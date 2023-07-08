#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int div;
	char *res;

	div = 1;
	res = (char *)&div;

	return (*res);
}
