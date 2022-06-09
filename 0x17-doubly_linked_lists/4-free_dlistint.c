#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the next free node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
