#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the next node
 * @index: node index
 * Return: address of node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int idx = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL && idx != index)
	{
		idx++;
		temp = temp->next;
	}
	if (index == idx)
		return (temp);
	else
		return (NULL);
}
