#include "hash_tables.h"

/**
 *hash_table_get - Retrieves a value associated with a key
 *
 *@ht: A pointer to the hash table.
 *@key: A pointer to the key.
 *
 *Return: the value associated with the element else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    /* Declare a pointer to a hash node. */
    hash_node_t *nodo;
    unsigned long int index;

    if (key == NULL || ht == NULL)
    return (NULL);

    /* Calculate the index of the key in the hash table. */
    index = key_index((const unsigned char *)key, ht->size);
    nodo = ht->array[index];

    for (; nodo != NULL; nodo = nodo->next)
    {
        if (strcmp(nodo->key, key) == 0)
        return (nodo->value);
        }
        return (NULL);
}
