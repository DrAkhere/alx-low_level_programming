#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - Entry point to get the gets length of the string
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
 * add_node - Entry piint to add a node
 * @str: string to be duplicated
 * @head: head of the list
 * Return: Return new_list
 */
list_t *add_node(list_t **head, const char *str)
{
	int length, x;
	char *data;
	list_t *new_list;

	if (str == NULL || head == NULL)
		return (NULL);
	length = _strlen(str);
	new_list = *head;
	data = malloc((length + 1) * sizeof(char));
	if (data == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		data[x] = str[x];
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	{
		free(data);
		return (NULL);
	}
	new_list->str = data;
	new_list->len = length;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
