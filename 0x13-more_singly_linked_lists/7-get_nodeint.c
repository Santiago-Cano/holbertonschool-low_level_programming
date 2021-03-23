#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of linked list
 * @head: head of linked list
 * @index: node to get
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	for (ind = 0; ind < index; ind++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
