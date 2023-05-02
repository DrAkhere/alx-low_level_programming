#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - Entry point to print the length of the list
 * @h: The pointer to the listint
 * Return: Return nothing at this point
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	
	if (h == NULL)
		return (0);
	count = 0;
	for (h != NULL, h = h->next; count++))
		;
	return (count);
}
