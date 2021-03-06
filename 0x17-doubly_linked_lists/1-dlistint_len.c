#include "lists.h"

/**
 * dlistint_len - return num of nodes in doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
