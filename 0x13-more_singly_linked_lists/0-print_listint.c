#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
