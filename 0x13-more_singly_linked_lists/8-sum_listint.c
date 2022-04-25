#include "lists.h"

/**
 * sum_listint - returns sum of all data of a listint_t linked list
 * @head: node linked list
 * Return: sum of listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
