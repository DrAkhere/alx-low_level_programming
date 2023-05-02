#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - Entry point to add all the data(n) in a list
 * @head: The beginning of the list
 * Return: Return the sum of all data in the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int x;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (x = 0; head != NULL; x++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
