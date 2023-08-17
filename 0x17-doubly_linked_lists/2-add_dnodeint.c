#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Adds a new node at the beginning of a listint_t list.
*
* @head: pointer to head pointer to the list.
* @n: number to add.
*
* Return: pointer to the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Initialize a pointer for the new node. */
	dlistint_t *current_node = NULL;

	/* Allocate memory for the new node. */
	current_node = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful. */
	if (!current_node)
		return (NULL);

	current_node->n = (int)n;
	current_node->next = NULL;
	current_node->prev = NULL;

	/* Check if the list is empty. */
	if (!*head)
	{
		*head = current_node;
		return (current_node);
	}
	current_node->next = *head;
	(*head)->prev = current_node;
	*head = current_node;

	return (current_node);
}
