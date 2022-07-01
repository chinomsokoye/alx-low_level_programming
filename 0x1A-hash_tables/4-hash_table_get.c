#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: The key
 * Return: Associated value with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int posit;
	hash_node_t *checks;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	posit = key_index((const unsigned char *)key, ht->size);
	checks = ht->array[posit];
	while (checks)
	{
		if (!strcmp(checks->key, key))
			return (checks->value);
		checks = checks->next;
	}
	return (NULL);
}
