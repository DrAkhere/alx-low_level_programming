#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Entry point to find a loop in a linked list
 * @head: The linked list to search
 * Return: Return the address of node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
