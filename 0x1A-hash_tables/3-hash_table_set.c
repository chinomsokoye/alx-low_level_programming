#include "hash_tables.h"

/**
 * hash_table_set - Adds element to the hash table
 * @ht: Hash table
 * @key: The key
 * @value: The value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int posit;
	hash_node_t *checks, *new;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	posit = key_index((const unsigned char *)key, ht->size);
	checks = ht->array[posit];
	while (checks)
	{
		if (!strcmp(checks->key, key))
		{
			free(checks->value);
			checks->value = strdup((char *)value);
			if (!checks->value)
				return (0);
			return (1);
		}
		checks = checks->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		exit(0);
	}
	new->value = strdup((char *)value);
	if (!new->key)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[posit];
	ht->array[posit] = new;
	return (1);
}
