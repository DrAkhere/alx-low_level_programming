#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - Entry point to add a new node
 * @head: The begining of the list
 * @n: The number of nodes i  the list
 * Return: Return address to new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = *head;
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
