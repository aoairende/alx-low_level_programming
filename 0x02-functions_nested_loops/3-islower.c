#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to be checked.
 *
 * Description: Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

