#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Entry point to allocated memory using malloc
 *
 * @b: The memory bytes to allocate
 * Return: Return the pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
