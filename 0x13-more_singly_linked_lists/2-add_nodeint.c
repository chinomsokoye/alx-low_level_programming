#include "lists.h"


/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to node start
 * @n: integer value
 * Return: addr to new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
