#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head2;

	if (!head)
		return;
	while (head)
	{
		head2 = head;
		head = head->next;
		free(head2);
	}
}
