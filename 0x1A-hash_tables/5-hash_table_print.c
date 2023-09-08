#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: A pointer to the hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int first_print = 1;
	hash_node_t *node = NULL;

    /* Check if the hash table pointer is NULL. */
	if (!ht)
		return;
	printf("{");
    /* Iterate through the hash table's array. */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			if (first_print)
			{
				printf("'%s': '%s'", node->key, node->value);
				first_print = 0;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
