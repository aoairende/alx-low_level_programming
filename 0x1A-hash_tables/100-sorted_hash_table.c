#include "hash_tables.h"
#include "sort_hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: A pointer to the size of the hash table.
 *
 * Return: A pointer to the created sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i;

    /* Check if the requested size is 0; a hash table cannot have size 0. */
	if (size == 0)
		return (NULL);

    /* Allocate memory for the sorted hash table structure. */
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for an array of sorted hash node pointers */
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	/* Initialise sorted hash node pointers to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

    /* Initialize other members of the sorted hash table. */
	table->shead = NULL;
	table->stail = NULL;
	table->size = size;

	return (table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table or updates.
 *
 * @ht: A pointer to the sorted hash table.
 * @key: A pointer to the key.
 * @value: A pointer to the value.
 *
 * Return: 1 if success, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL, *head = NULL, *current_node = NULL;
    /* Check if the sorted hash table pointer is NULL. */
	if (!ht)
		return (0);
    /* Create a new sorted hash node. */
	node = create_snode(key, value);
	if (!node)
		return (0);
    /* Calculate the index where the node should be placed. */
	index = key_index((const unsigned char *)key, ht->size);

	/* Add the node if the node at the index is NULL */
	if (!ht->array[index])
	{
		ht->array[index] = node;
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	/* Check if a node in the list has same key and update */
	head = ht->array[index];
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = realloc(current_node->value, strlen(value) + 1);
			strcpy(current_node->value, value);

			free_node(node);
			return (1);
		}
		current_node = current_node->next;
	}

	node->next = head;
	ht->array[index] = node;

	return (1);
}

/**
 * create_snode - Creates a new sorted hash node with the given key and value.
 *
 * @key: A pointer to the key.
 * @value: A pointer to the value.
 *
 * Return: A pointer to the created sorted hash node.
 */

shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *node = NULL;

    /* Check if key or value are NULL or empty. */
	if (!key || strlen(key) == 0 || !value)
		return (NULL);

    /* Allocate memory for the new sorted hash node. */
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);

    /* Allocate memory for the key and value strings. */
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
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * free_node - Deallocates memory for a sorted hash node.
 *
 * @node: A pointer to the node to free.
 */

void free_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
