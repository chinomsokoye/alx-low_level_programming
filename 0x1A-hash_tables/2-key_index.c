#include "hash_tables.h"

/**
 * key_index - Returns key index
 * @key: The key
 * @size: The size
 * Return: Hashed key size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
