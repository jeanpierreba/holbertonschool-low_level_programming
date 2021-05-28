#include "hash_tables.h"

/**
* key_index - give you the index of a key
* @key: the key we want to get the index
* @size: size of the array of the hash table
* Return: index of the key or 0 if something fails
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
