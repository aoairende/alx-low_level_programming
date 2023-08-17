#include "lists.h"

/**
* sum_dlistint - returns the sum of data of a listint_t linked list.
* 
* @head: pointer to head of the list
* Return: sum of data in list
*/

int sum_dlistint(dlistint_t *head)
{
	/* Initialize a variable to store the sum. */
	int sum = 0;
	/* Create a pointer to traverse the list. */
	dlistint_t *current_node = head;

	/* If the list is empty, return 0. */
	if (!current_node)
		return (0);

	/* Iterate through the list nodes until the end is reached. */
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
