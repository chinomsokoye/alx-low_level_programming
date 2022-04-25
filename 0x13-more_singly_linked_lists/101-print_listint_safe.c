#include "lists.h"

/**
 * print_listint_safe - prints a listint_int linked list
 * @head: listint to print
 * Return: list node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		numb++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (numb);
}
