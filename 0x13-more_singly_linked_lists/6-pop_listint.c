#include "lists.h"

/**
 * pop_listint - deletes head node and return head node data
 * @head: linked list addr
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp;

	if (*head == NULL)
		return (value);
	temp = *head;
	value = temp->n;
	free(*head);
	*head = temp->next;

	return (value);
}
