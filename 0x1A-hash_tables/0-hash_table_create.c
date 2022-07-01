#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: The size
 * Return: A pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i = 0;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (!new_table)
		{
			return (NULL);
		}
		new_table->size = size;
		new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}
		while (i < size)
		{
			new_table->array[i] = NULL;
			i++;
		}
		return (new_table);
	}
	return (NULL);
}
