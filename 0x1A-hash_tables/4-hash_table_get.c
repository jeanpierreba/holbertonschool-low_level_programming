#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table we want to check
* @key: key where we will get te value from
* Return: the value associated with the key or NULL if fails
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_n = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || !key[0])
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hash_n = ht->array[index];

	while (hash_n != NULL)
	{
		if (!strcmp(hash_n->key, (char *)key))
			return (hash_n->value);
		hash_n = hash_n->next;
	}

	return (NULL);
}
