#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Entry point
 *
 * Description: Write a function that adds a new node at the beginning
 * of a list.
 *
 * @head: pointer to the pointer of the head node of the list
 * @n: integer to be stored.
 *
 * Return: NULL if it fails to allocate memory
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
