#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Entry point for allocates memory for an array, using malloc
 * @nmemb: The number of array elements
 * @size: The number of bytes to be used
 * Return: Return NULL if nmemb/size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	unsigned int y;
	char *i;
	char *j;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}
	x = nmemb * size;
	i = j = malloc(x);
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
		*i++ = 0;
	return (j);
}
