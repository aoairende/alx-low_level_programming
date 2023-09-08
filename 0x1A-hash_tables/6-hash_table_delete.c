#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and itrs contents.
 *
 * @ht: A pointer to the hash table to be deleted.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

    /* Check if the hash table pointer is NULL. */
	if (!ht)
		return;
    /* Iterate through the array of the hash table. */
	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - Frees a linked list of hash nodes.
 *
 * @head: A pointer to the begining of linked list.
 */

void free_list(hash_node_t *head)
{
	hash_node_t *curr_node = NULL;

    /* Traverse the linked list and free each node. */
	while (head)
	{
		curr_node = head;
		head = head->next;
		free_node(curr_node);
	}
}
