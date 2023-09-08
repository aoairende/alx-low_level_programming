#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * 
 * @ht: A pointer to the hash table.
 * @key: A pointer to the key.
 * @value: A pointer to the value.
 * 
 * Return: 1 if success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *head = NULL, *current_node = NULL;

    /* Check if the hash table pointer is NULL. */
	if (!ht)
		return (0);
    /* Create a new hash node. */
	node = create_node(key, value);
	if (!node)
		return (0);
    /* Calculate the index where the node should be placed. */
	index = key_index((const unsigned char *)key, ht->size);

	/* Add node if node at index is NULL */
	if (!ht->array[index])
	{
		ht->array[index] = node;
		return (1);
	}
	/* Check if a node in the list has the same key and update. */
	head = ht->array[index];
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
            /* Update the value and reallocate memory if needed. */
			current_node->value = realloc(current_node->value, strlen(value) + 1);
			strcpy(current_node->value, value);
			/* Free unused node created */
			free_node(node);
			return (1);
		}
		current_node = current_node->next;
	}
	/* Key doesn't exist so add the node to the beginning of list */
	node->next = head;
	ht->array[index] = node;

	return (1);
}

/**
 * create_node - Creates a new hash node with the given key and value.
 * 
 * @key: A pointer to the key.
 * @value: A pointer to the value.
 * 
 * Return: The created hash node.
*/

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;
    /* Check if key or value are NULL or empty. */
	if (!key || strlen(key) == 0 || !value)
		return (NULL);

    /* Allocate memory for the new node. */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

    /* Allocate memory for the key and value strings */
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!node->key)
	{
		if (node->value)
			free(node->value);
		free(node);
		return (NULL);
	}

	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!node->value)
	{
		if (node->key)
			free(node->key);
		free(node);
		return (NULL);
	}

    /* Copy the key and value into the node. */
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

/**
 * free_node - Deallocates memory for a hash node.
 * 
 * @node: A pointer to the node to free.
*/

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
