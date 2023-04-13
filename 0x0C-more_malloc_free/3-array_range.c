#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Entry point that creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: Return pointer to newly created array(success) & NULL if min > max,
 * or if malloc fails
 */
int *array_range(int min, int max)
{
	unsigned int sizeofarray;
	unsigned int x;
	int *n_array;

	if (min > max)
	{
		return (NULL);
	}
	sizeofarray = max - min;
	n_array = malloc(sizeof(int) * (sizeofarray + 1));
	if (n_array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < sizeofarray; x++)
	{
		n_array[x] = x + min;
	}
	n_array[sizeofarray] = max;
	return (n_array);
}
