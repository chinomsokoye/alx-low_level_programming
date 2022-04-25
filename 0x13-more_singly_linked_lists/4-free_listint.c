#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: struct list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
}
