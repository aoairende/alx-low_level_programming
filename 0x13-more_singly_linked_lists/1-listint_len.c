#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry point
 *
 * Description: Write a function that returns the number of elements
 * in a linked list.
 *
 * @h: points to the head of the lnked list.
 *
 * Return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
