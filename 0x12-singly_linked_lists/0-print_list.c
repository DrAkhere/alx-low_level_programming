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
	const list_t *tem = h;

	while (tem != NULL)
	{
		if (tem->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", tem->len, tem->str);
		x++;
		tem = tem->next;
	}
	return (x);
}
