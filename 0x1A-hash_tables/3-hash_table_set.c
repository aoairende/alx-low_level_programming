#include "hash_tables.h"

/**
 *hash_table_set - Adds an element to the hash table.
 *@ht: A pointer to the hash table.
 *@key: A pointer to the key.
 *@value: Value to be added to the hash table.
 *Return: 1 if successful, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index, size;
hash_node_t *new_node;

/* Check for NULL pointers and return 0 if any of them is NULL. */
if (ht  == NULL || key == NULL || value == NULL)
return (0);

size = ht->size;
index = key_index((const unsigned char *)key, size);

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
ht->array[index]->value = strdup(value);
return (1);
}
/* Allocate memory for a new hash node. */
new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (0);
/* Initialize the new hash node with key, value, and next pointer. */
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
