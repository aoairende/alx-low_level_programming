#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry point
 *
 * Description: Write a function that adds a new node at the beginning of
 * a list_t list.
 *
 * @h: name of the list
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
