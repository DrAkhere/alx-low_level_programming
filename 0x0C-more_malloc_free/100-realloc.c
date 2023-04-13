#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - Entry point to allocates a memory block using malloc and free
 * @ptr: pointer to memory allocated with malloc(old_size)
 * @old_size: The size of the allocated space for ptr in byte
 * @new_size: size of the new memory block in byte
 * Return: Return NULL if new_size = 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *z;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		z = malloc(new_size);
		if (z == NULL)
			return (NULL);
		return (z);
	}
	if (new_size > old_size)
	{
		z = malloc(new_size);
		if (z == NULL)
			return (NULL);
		for (x = 0; x < old_size && x < new_size; x++)
			*((char *)z + x) = *((char *)ptr + x);
		free(ptr);
	}
	return (z);
}
