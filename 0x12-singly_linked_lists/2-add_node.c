#include "lists.h"
#include <string.h>
#include <stdlib.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int length;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	newnode->len = length;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
