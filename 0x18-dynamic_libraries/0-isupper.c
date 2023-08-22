#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to check
 *
 * Description: Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
