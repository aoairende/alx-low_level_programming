#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	/* Store a copy of the hash table pointer. */
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	/* Iterate through each bucket in the hash table. */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				/* Free the memory allocated for the key, value, and node. */
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
