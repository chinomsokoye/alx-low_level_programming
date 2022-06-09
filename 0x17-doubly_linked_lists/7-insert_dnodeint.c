#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dpointer to node
 * @idx: index
 * @n: integer
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int ind = 1;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp->next != NULL && ind != idx)
	{
		temp = temp->next;
		ind++;
	}
	if (ind == idx)
	{
		new->prev = temp;
		new->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
