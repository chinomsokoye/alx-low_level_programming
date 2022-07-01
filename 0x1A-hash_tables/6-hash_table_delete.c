#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *frees, *temp;

	while (i < ht->size)
	{
		frees = ht->array[i];
		while (frees)
		{
			temp = frees->next;
			free(frees->key);
			free(frees->value);
			free(frees);
			frees = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
