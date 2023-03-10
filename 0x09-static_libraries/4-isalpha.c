#include "main.h"

/**
 * _isalpha - Entry point
 * @c: The character to be checked.
 *
 * Description: Write a function that checks for alphabetic character.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
