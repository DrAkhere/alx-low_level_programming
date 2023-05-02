#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * search_listint_loop - Entry point to search for a loop in a linked list
 * @head: The linked list to be search
 * Return: Return the address of node where loop starts or NULL if no loop
 */
listint_t *search_listint_loop(listint_t *head)
{
	listint_t *pointer, *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (pointer = head; pointer != last; pointer = pointer->next)
			if (pointer == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - Entry point to prints a list even if it has a loop
 * @head: The beginning of list to print
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int loop;
	listint_t *loop_node;

	loop_node = search_listint_loop((listint_t *) head);

	for (count = 0, loop = 1; (head != loop_node || loop) && head != NULL;)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			loop = 0;
		head = head->next;
		count++;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (count);
}
