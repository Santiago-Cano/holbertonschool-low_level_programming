#include "lists.h"

/**
 * listint_len - print elements of linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
