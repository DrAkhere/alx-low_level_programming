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
	int x = 0;
	const listint_t *tem = h;

	while (tem != NULL)
	{
		x++;
		tem = tem->next;
	}
	return (x);
}
