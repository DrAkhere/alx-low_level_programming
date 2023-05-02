#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - Entry point to add a node to the end
 * @head: The begining of the list
 * @n: The number of nodes present in the list
 * Return: Return the address to the new link or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *current;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new_list;
	return (*head);
}


