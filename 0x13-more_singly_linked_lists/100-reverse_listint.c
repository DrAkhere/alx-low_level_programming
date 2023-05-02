#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recursive- Entry point to recursively reverses a listint list
 * @first: The node to reverse
 * @r_first: The node after node to reverse
 * Return: void
 */
listint_t *reverse_recursive(listint_t *first, listint_t *r_first)
{
	listint_t *new, *current = NULL;

	new = first;
	while (new->next != r_first)
	{
		current = new;
		new = new->next;
	}

	if (current != NULL)
		current->next = first;
	r_first = first->next;
	first->next = new->next;
	if (first != new && r_first != first)
		r_first = reverse_recursive(r_first, first);
	new->next = r_first;
	return (new);
}

/**
 * reverse_listint - Entry point to reverses a listint list
 * @head: The begining of the list to reverse
 * Return: The head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	*head = reverse_recursive(*head, NULL);
	return (*head);
}
