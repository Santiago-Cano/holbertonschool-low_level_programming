#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: head of linked list
 * @n: int value to asign to new node
 * Return: pointer address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addend;
	listint_t *head2;

	addend = malloc(sizeof(listint_t));
	if (addend == NULL)
		return (NULL);
	addend->n = n;
	addend->next = NULL;
	if (*head == NULL)
	{
		*head = addend;
		return (addend);
	}
	head2 = *head;
	while (head2->next != NULL)
		head2 = head2->next;
	head2->next = addend;
	return (addend);
}
