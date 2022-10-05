#include "search_algos.h"

/**
 * linear_skip - searches using the linear skip
 * @list: Pointer to the list to search in
 * @value: Value to search
 * Return: NULL, value location
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (!list)
		return (NULL);
	for (node = jump = list; jump->next && jump->n < value;)
	{
		node = jump;
		if (jump->express)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
			       jump->index, jump->n);
		}
		else
		{
			while (jump->next)
				jump = jump->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	       node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n",
		       node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
