#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry point
 *
 * Description: Write a function that frees a listint_t list.
 *
 * @head: points to the head of the list.
 *
 * Return: NULL if there is an error.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->temp
			free(temp);
		head = temp;
	}
}
