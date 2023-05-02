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
	listint_t *tem;

	while (head != NULL)
		return;
	tem = head->next;
	free(head);
	head = tem;
}
