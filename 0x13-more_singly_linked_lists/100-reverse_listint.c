#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = next;
	}
	*head = bef;
	return (*head);
}
