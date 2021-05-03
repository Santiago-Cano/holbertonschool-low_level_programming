#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of dlistint_t list
 * @head: head of dlistint_t list
 * @index: nth node to return
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	for (n = 0; n != index && head; n++)
		head = head->next;
	if (!head)
		return (NULL);
	return (head);
}
