#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Entry point to print listint
 * @h: The pointer to the lists
 * Return: Return the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	for (; h;)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
