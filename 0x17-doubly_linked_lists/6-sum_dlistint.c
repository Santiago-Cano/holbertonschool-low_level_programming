#include "lists.h"

/**
 * sum_dlistint - return sum of data in dlistint_t list
 * @head: head of dlistint_t list
 * Return: sum of data in dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
