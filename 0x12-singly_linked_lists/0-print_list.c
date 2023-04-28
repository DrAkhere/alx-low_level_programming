#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Entry point to print a list
 * @h: The pointer to the list
 * Return: Return the number of node
 */

size_t print_list(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
