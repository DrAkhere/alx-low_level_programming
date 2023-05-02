#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - Entry point to get nth node of a linked list
 * @head: The beginning of a linked list
 * @index: The index of the required node
 * Return: Return the nth node of a list or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
