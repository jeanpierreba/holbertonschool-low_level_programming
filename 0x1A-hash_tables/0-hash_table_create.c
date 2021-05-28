#include "hash_tables.h"

/**
* hash_table_create - creates a new hash table
* @size: size of the array
* Return: pointer to the new hash table or NULL if fails
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = calloc(size, sizeof(hash_table_t *));

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	return (new_hash);
}
