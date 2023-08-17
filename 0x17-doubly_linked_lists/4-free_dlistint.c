#include "lists.h"

/**
* free_dlistint - frees a listint_t list
*
* @head: pointer to begining of list
*/

void free_dlistint(dlistint_t *head)
{
	/* Initialize a pointer for the current node. */
	dlistint_t *curr_node = NULL;

	/* Check if the list is empty. */
	if (!head)
		return;

	/* Set the current node pointer to the head of the list.*/
	curr_node = head;

	while (head->next)
	{
		head = head->next;
		free(curr_node);
		curr_node = head;
	}
	free(head);
}
