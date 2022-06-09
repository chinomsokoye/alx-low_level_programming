#include "lists.h"

/**
 * print_dlistint - prints all elements of a lists
 * @h: list header pointer
 * Return: list node number size
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int counter = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
