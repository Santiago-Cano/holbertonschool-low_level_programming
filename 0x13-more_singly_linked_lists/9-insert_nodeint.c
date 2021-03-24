#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at nth index of linked list
 * @head: head of linked list
 * @idx: node to get
 * @n: value to assign to node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ind;
	listint_t *node, *head2;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
		return (NULL);
	head2 = *head;
	node->n = n;
	if (idx == 0)
	{
		node->next = head2->next;
		head2 = node;
		return (node);
	}
	for (ind = 1; ind < idx; ind++)
	{
		if (head2 == NULL)
		{
			free(head2);
			return (NULL);
		}
		head2 = head2->next;
	}
	node->next = head2->next;
	head2->next = node;
	return (node);
}
