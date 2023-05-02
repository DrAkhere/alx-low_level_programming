#include "lists.h"
#include <stdlib.h>

/**
 * search_listint_loop1 - Entry loint to finds a loop in a linked list
 * @head: The beginning of the linked list to search
 * Return: Return the address of node where loop starts or NULL if no loop
 */
listint_t *search_listint_loop1(listint_t *head)
{
	listint_t *pointer, *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (pointer = head; pointer != last; pointer = pointer->next)
			if (pointer == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - Entry point to free a listed list even if it has a loop
 * @h: The beginning of a linked list
 * Return: Return the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t count;
	int loops = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = search_listint_loop1(*h);
	for (count = 0; (*h != loop_node || loops) && *h != NULL; *h = next)
	{
		count++;
		next = (*h)->next;
		if (*h == loop_node && loops)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			count++;
			next = next->next;
			free((*h)->next);
			loops = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (count);
}
