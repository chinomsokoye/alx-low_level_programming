#include "search_algos.h"

/**
 * jump_list - searches using the jump list
 * @list: Pointer to the list to search in
 * @size: Number in array
 * @value: Value to search
 * Return: NULL, value location
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *size;

	if (!list)
		return (NULL);
	for (node = size = list; size->next && size->n < value;)
	{
		node = size;
		if (size->next)
		{
			size = size->next;
			printf("Value checked at index [%ld] = [%d]\n",
			       size->index, size->n);
		}
		else
		{
			while (size->next)
				size = size->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	       node->index, size->index);
	for (; node->index < size->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n",
		       node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
