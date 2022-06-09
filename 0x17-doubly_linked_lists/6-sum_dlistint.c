#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a dlistint_t linked list
 * @head: pointer to node
 * Return: data sum
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
