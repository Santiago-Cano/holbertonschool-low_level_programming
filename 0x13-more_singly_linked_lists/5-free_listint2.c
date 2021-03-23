#include "lists.h"

/**
 * free_listint2 - free list_t list
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *head2;


	if (head == NULL)
		return;
	while (*head != NULL)
	{
		head2 = *head;
		*head = head2->next;
		free(head2);
	}
}
