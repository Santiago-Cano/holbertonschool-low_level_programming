#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a dlistint_t list
 * @head: head of dlistint_t list
 * @n: dlistint_t data
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *index;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		node->n = n;
		*head = node;
		return (node);
	}

	/* without an index (replacement for head) this gets messy*/
	index = *head;
	while (index->next != NULL)
		index = index->next;
	node->next = NULL;
	node->prev = index;
	node->n = n;
	index->next = node;
	return (node);
}
