#include "lists.h"

/**
 * delete_nodeint_at_index - delete nth node of linked list
 * @head: head of linked list
 * @idx: node to get
 * @n: value to assign to node
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ind;
	listint_t *del, *head2;

	if (*head == NULL)
		return (-1);
	head2 = *head;
	if (index == 0)
	{
		*head = head2->next;
		free(head2);
		return (1);
	}
	for (ind = 1; ind < index; ind++)
	{
		head2 = head2->next;
		if (head2 == NULL)
			return (-1);
	}
	del = head2->next;
	head2->next = head2->next->next;
	free(del);
	return (1);
}
