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
	char *j;

	j = malloc(nmemb * size);
	for (y = 0; y < (nmemb * size); y++)
        {
                j[y] = 0;                                 }

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}

	if (j == NULL)
	{
		return (NULL);
	}

	return (j);
}
