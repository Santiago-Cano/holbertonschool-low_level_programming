#include "lists.h"

/**
 * pop_listint - delete head of list
 * @head: head of list
 * Return: 0 if list is empty, otherwise n of head
 */
int pop_listint(listint_t **head)
{
	int headn;
	listint_t *head2;

	if (*head == NULL)
		return (0);

	head2 = *head;
	*head = head2->next;
	headn = head2->n;
	free(head2);
	return (headn);
}
