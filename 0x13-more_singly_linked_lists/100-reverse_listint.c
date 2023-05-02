#include "lists.h"
/**
 * reverse_listint - Entry point to reverse a list
 * @head: The beginning of a list
 * Return: Return pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (current);
}
