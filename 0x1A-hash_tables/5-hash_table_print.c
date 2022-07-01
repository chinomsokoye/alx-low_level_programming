#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int last_key;
	hash_node_t *prints;

	if (ht == NULL)
		return;
	last_key = ht->size - 1;
	while (!ht->array[last_key] && last_key != 0)
		last_key--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		prints = ht->array[i];
		while (prints)
		{
			printf("'%s': '%s'", prints->key, prints->value);
			if (i != last_key)
				printf(", ");
			prints = prints->next;
		}
	}
	printf("}");
	printf("\n");
}
