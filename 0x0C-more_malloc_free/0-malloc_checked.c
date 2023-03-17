#include "main.h"

/**
 * malloc_checked - Entry point
 *
 * Description: Write a function that allocates memory using malloc.
 *
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
