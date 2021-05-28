#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: hash table we want to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_n = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		hash_n = ht->array[i];
		while (hash_n != NULL)
		{
			tmp = hash_n->next;
			free(hash_n->key);
			free(hash_n->value);
			free(hash_n);
			hash_n = tmp;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
