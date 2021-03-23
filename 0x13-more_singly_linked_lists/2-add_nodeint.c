#include "lists.h"

/**
 * add_nodeint - add node to beggining of linked list
 * @head: head of linked list
 * @n: int value to asign to new node
 * Return: pointer address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addhead;

	addhead = malloc(sizeof(listint_t));
	if (addhead == NULL)
		return (NULL);

	addhead->n = n;
	addhead->next = *head;
	*head = addhead;
	return (addhead);
}
