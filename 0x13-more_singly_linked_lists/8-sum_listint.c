#include "lists.h"

/**
 * sum_listint - sum all the data(n) of a linked list
 * @head: head of linked list
 * Return: sum of linked list data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
