#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup - Entry point that returns pointer to a new space in memory
 * cont' - which contains copy of string given as a parameter
 * @str: The string
 * Return: Return NULL if str is NULL / insufficient memory & return pointer if
 * cont' -  to duplicated string of successful
 */
char *_strdup(char *str)
{
	int size;
	int x;
	char *dupl;

	if (str == NULL)
		return (NULL);

	size = string_length(str);
	dupl = (char *)malloc(sizeof(char) * size + 1);
	if (dupl == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
	{
		dupl[x] = str[x];
		x++;
	}
	dupl[x] = '\0';
	return (dupl);
}
/**
  * string_length - Entry point that finds the length of a string
  * @pointer: The pointer
  * Return: Return length of c
  */
int string_length(char *pointer)
{
	int y = 0;

	while (*(pointer + y) != '\0')
	{
		y++;
	}
	return (y);
}
