#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Entry point to delete the node of a list and return data
 * @head: The beginning of the list
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current, *tem;
	int x;

	if (*head == NULL)
		return (0);

	tem = current = *head;
	if (*head)
	{
		x = current->n;
		*head = current->next;
		free(tem);
	}
	else
		x = 0;
	return (x);
}
