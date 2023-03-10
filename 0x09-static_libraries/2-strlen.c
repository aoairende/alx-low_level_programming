#include "main.h"

/**
 * _strlen - Entry point
 * @s: char to check
 *
 * Description: Write a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;

	return (a);
}
