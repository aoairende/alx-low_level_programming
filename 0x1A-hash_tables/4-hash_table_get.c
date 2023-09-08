#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key from a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: A pointer to the key.
 *
 * Return: The value associated with the given key if found, otherwise NULL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL;

    /* Check if the hash table pointer, key, or key length is invalid. */
	if (!ht || !key || strlen(key) == 0)
		return (NULL);

    /* Calculate the index where the key is likely to be found. */
	index = key_index((const unsigned char *)key, ht->size);

	/* check if a node in the list has same key and return value */
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}
    /* If the key is not found in the linked list, return NULL. */
	return (NULL);
}
