#include "hash_tables.h"

/**
 * key_index - Computes index of a key.
 * 
 * @key: A pointer to the key.
 * @size: A size of array in the hash table.
 * 
 * Return: The index where a hash node with tje given key will be stored.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = hash_djb2(key);

	return (hashed_key % size);
}
