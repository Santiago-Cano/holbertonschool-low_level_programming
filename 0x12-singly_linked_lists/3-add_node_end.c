#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the tail of list_t
 * @head: start of list_t
 * @str: string to be duplicated
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *endnode;
	list_t *head2;

	if (str == NULL)
		return (NULL);
	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	endnode->len = length;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	head2 = *head;
	while (head2->next != NULL)
		head2 = head2->next;
	head2->next = endnode;
	return (endnode);
}
