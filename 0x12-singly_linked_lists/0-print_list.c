#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - Entry point to print a list
 * @h: The pointer to the list
 * Return: Return the number of node
 *
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
