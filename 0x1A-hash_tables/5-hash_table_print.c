#include "hash_tables.h"

/**
* hash_table_print - print a hash table
* @ht: hash table we want to print
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_table_t hash_n = NULL;
	unsigned int i = 0, separator = 0;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		hash_n = ht->array[i];
		while (hash_n != NULL)
		{
			if (separator)
				printf(", ");
			print("'%s': '%s'", hash_n->key, hash_n->value);
			hash_n = hash_n->next;
			separator = 1;
		}
	}
	printf("}\n");
}
