#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array - Entry point that creates an array of chars & intitializes it
 * @size: The size of the chars
 * @c: The character
 * Return: Return NULL if size is 0, pointer to array if success otherwise null
 */
char *create_array(unsigned int size, char c)
{
	char *carray;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	carray = malloc(sizeof(char) * size);
	if (carray == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		carray[x] = c;
	}
	return (carray);
}
