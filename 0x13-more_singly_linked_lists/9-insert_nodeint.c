#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - Entry point to insert a new node to list
 * @head: The beginning of list
 * @idx: The index in the list where the new node should be added
 * @n: The number of node present in the list
 * Return: Return the address of the new node or Null if not possible
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_list;

	current = *head;
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	if (idx == 0)
	{
		new_list->next = current;
		*head = new_list;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new_list);
			return (NULL);
		}
	}
	new_list->next = current->next;
	current->next = new_list;
	return (new_list);
}
