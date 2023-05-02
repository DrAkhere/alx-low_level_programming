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
	const listint_t *tem = h;

	while (tem != NULL)
	{
		printf("%d\n", tem->n);
		x++;
		tem = tem->next;
	}
	return (x);
}
