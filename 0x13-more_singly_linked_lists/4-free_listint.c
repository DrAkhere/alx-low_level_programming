#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Entry point to free listint
 * @head: The begining of the list
 * Return: Return nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
