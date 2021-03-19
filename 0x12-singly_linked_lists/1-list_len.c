#include "lists.h"

/**
 * list_len - return number of elements in list_t
 * @h: list_t nodes
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
