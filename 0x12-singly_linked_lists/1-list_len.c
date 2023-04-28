#include "lists.h"

/**
 * list_len - Entry point to determine the length of the list
 * @h: constant
 * Return: Return nothing at this point
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	for (; h;)
	{
		h = h->next;
		count++;
	}
	return (count);
}

