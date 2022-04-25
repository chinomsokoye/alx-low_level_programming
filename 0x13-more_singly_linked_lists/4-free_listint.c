#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: struct list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(head);
	}
}
