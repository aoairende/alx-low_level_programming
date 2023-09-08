#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: Size of the hash table.
 *
 * Return: If an error occurs, NULL, otherwise pointer to the new hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

    /* Allocate memory for the hash table structure. */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for hash node pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	/* Initialise hash node pointers to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

    /* Set the size of the hash table. */
	ht->size = size;

	return (ht);
}
