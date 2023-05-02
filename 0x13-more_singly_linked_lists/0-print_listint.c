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
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
