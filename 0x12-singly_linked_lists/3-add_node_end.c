#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  * _strlen - Entry oiint to get length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int x = 0;

	for (; s[x]; x++)
		;
	return (x);
}
/**
  * add_node_end - Entry point to add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: Return pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *current;
	char *dstr;

	if (str == NULL)
		return (NULL);
	dstr = strdup(str);
	if (dstr == NULL)
		return (NULL);
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = dstr;
	new_list->len = _strlen(str);
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_list;
	return (*head);
}
