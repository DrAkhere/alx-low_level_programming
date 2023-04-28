#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - Entry point to free a list
 * @head: The begining of the list
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head != NULL)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
