#include "hash_tables.h"

/**
 *hash_table_print - Function that prints a hash table
 *
 *@ht: A pointer to the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int cont = 0, i = 0;

/* Check if the hash table is not NULL. */
if (ht != NULL)
{
    /* Begin printing the hash table contents.*/
printf("{");
for (cont = 0; cont < ht->size; cont++)
{
node = ht->array[cont];
while (node != NULL)
{
if (i != 0)
printf(", ");
i = 1;
/* Print the key-value pair in the format 'key': 'value'. */
printf("'%s': '%s'", node->key, node->value);
/* Move to the next node in the linked list. */
node = node->next;
}
}
printf("}\n");
}
}
