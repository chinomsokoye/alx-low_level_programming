#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: pointer to list head
 * Return: number of nodes in dlinkint list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int counter = 0;

	temp = h;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
