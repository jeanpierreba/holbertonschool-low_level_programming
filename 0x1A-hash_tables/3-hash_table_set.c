#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_n = NULL, *collision_n = NULL;
	unsigned long int index;
	char *value_duplicate = NULL, *key_duplicate = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hash_n = ht->array[index];
	value_duplicate = strdup(value);

	if (value_duplicate == NULL)
		return (0);

	while (hash_n != NULL)
	{
		if (!strcmp(hash_n->key, key))
		{
			free(hash_n->value);
			hash_n->value = value_duplicate;
			return (1);
		}
		hash_n = hash_n->next;
	}

	hash_n = ht->array[index];
	collision_n = malloc(sizeof(hash_node_t));
	if (collision_n == NULL)
	{
		free(value_duplicate);
		return (0);
	}
	key_duplicate = strdup(key);
	if (key_duplicate == NULL)
		return (free(value_duplicate), free(collision_n), 0);
	collision_n->key = key_duplicate;
	collision_n->value = value_duplicate;
	collision_n->next = hash_n;
	ht->array[index] = collision_n;
	return (1);
}
