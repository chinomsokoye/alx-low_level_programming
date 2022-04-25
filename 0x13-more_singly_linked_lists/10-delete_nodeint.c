#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *orig = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	orig = temp->next;
	temp->next = orig->next;
	free(orig);

	return (1);
}
