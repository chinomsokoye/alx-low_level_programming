#include "lists.h"

/**
 * pop_listint - deletes head node and return head node data
 * @head: linked list addr
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
