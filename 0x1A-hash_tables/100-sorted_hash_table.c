#include "hash_tables.h"

/**
 * shash_table_create - Creates shash table
 * @size: The size
 * Return: A pointer to the created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned int i = 0;

	if (size > 0)
	{
		new_table = malloc(sizeof(shash_table_t));
		if (!new_table)
		{
			return (NULL);
		}
		new_table->size = size;
		new_table->array = malloc(sizeof(shash_node_t *) * size);
		new_table->shead = NULL;
		new_table->stail = NULL;
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

/**
 * shash_table_set - Adds element to the shash table
 * @ht: Shash table
 * @key: The key
 * @value: The value
 * Return: 0 or 1
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int posit;
	shash_node_t *checks, *new;

	if (!ht || strlen(key) == 0)
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
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[posit];
	ht->array[posit] = new;
	new->snext = NULL;
	new->sprev = NULL;
	return (set_sorted_list(ht, new));
}

/**
 * set_sorted_list - Sets doubly linked list
 * @ht: The hash table
 * @new: The new
 * Return: 0 or 1
 */

int set_sorted_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *sorts;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	if (strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return (1);
	}
	else
	{
		sorts = ht->shead->snext;
		while (sorts && strcmp(new->key, sorts->key) > 0)
			sorts = sorts->snext;
		if (!sorts)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return (1);
		}
		new->sprev = sorts->sprev;
		sorts->sprev->snext = new;
		sorts->sprev = new;
		new->snext = sorts;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The shash table
 * @key: The key
 * Return: Associated value with element
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int posit;
	shash_node_t *checks;

	if (!ht || strlen(key) == 0)
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

/**
 * shash_table_print - Prints a shash table
 * @ht: The shash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *heads;

	if (!ht)
		return;
	heads = ht->shead;
	printf("{");
	while (heads)
	{
		printf("'%s': '%s'", heads->key, heads->value);
		if (heads != ht->stail)
			printf(", ");
		heads = heads->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints reversed shash table
 * @ht: The reversed shash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tails;

	if (!ht)
		return;
	tails = ht->stail;
	printf("{");
	while (tails)
	{
		printf("'%s': '%s'", tails->key, tails->value);
		if (tails != ht->shead)
			printf(", ");
		tails = tails->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *frees, *temp;

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
