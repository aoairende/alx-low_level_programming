#include "lists.h"

/**
* print_dlistint - prints all elements of a dlistint_t list
*
* @h: pointer to the list.
*
* Return: number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize the length counter. */
	size_t length = 0;
	/* Initialize a pointer to the current node. */
	const dlistint_t *current_node = NULL;

	/* Check if the list is empty. */
	if (!h)
		return (length);

	/* Set the current node pointer to the head of the list. */
	current_node = h;

	/* Iterate the linked list and print each node's data. */
	while (current_node)
	{
		length++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
	return (length);
}
