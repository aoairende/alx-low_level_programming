#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize the length counter. */
	size_t len = 0;

	/* Initialize pointers from previous and next nodes. */
	const dlistint_t *prev = NULL, *next = NULL;

	/* Check if the list is empty. */
	if (h == NULL)
		return (0);
	prev = h->prev;
	next = h;

	/* Count the number of nodes by traversing the list in both directions. */
	while (prev)
	{
		prev = prev->prev;
		len++;
	}
	while (next)
	{
		next = next->next;
		len++;
	}

	return (len);
}
