#include "lists.h"

/**
 * listint_len - lenght of linked list
 * @h: struct type
 * Return: elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
