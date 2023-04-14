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
	unsigned int y;
	char *j, *i;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}
	i = j = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < (nmemb * size); y++)
		*i++ = 0;
	return (j);
}
