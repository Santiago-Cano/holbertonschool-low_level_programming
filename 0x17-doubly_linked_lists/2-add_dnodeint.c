#include "lists.h"

/**
 * add_dnodeint - add node at the beggining of dlistint_t list
 * @head: head of dlistint_t list
 * @n: data of dlistint_t list
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

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
	node->next = *head;
	node->prev = NULL;
	node->n = n;
	(*head)->prev = node;
	*head = node;
	return (node);
}
