#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
