#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to the head of the list.
 * @n: value to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Initialize pointers for the new node and traversal. */
	dlistint_t *new, *node;

	/* Check if the head pointer is NULL. */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node. */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	/* Assign the provided value to the new node's data. */
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* Set 'node' pointer to the current head of the list. */
	node = *head;

	/* Check if the list is empty.*/
	if (node == NULL)
		*head = new;
	else
	{
		while (node)
		{
			new->prev = node;
			node = node->next;
		}
		new->prev->next = new;
	}

	return (new);
}
