#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Entry point to free list
 * @head: The pointer to he pointer of the begining
 * Return: Return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tem;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tem = current;
		current = current->next;
		free(tem);
	}
	*head = NULL;
}
