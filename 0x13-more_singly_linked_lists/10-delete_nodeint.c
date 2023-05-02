#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Entry point to delete a node fro a list
 * @head: The beginning of a list
 * @index: The index of the node to be deleted
 * Return: Return 1 if it succeeded or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *new_list;
	unsigned int x;

	if (*head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (x = 0; x < (index - 1); x++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	new_list = current->next;
	current->next = new_list->next;
	free(new_list);
	return (1);
}
