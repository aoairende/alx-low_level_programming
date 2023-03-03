#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @a: pointer
 *
 * Description: Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * Prototype: char *string_toupper(char *);
 *
 * Return: char
 */

char *string_toupper(char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')

	{
		if (a[x] >= 'a' && a[x] <= 'z')
			a[x] = a[x] - 32;
		x++;
	}

	return (a);
}
