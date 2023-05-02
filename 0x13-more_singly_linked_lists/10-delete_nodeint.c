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

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		new_list = (*head)->next;
		free(*head);
		*head = new_list;
		return (1);
	}
	new_list = *head;

	for (; index && new_list->next != NULL; new_list = new_list->next)
	{
		current = new_list;
		index--;
	}
	if (index)
		return (-1);
	current->next = current->next->next;
	free(new_list);
	return (1);
}
