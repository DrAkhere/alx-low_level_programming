#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Entry point to execute a function given as parameter
 * @array: The inputed array
 * @size: The size of inputed array
 * @action: The pointer to the function been cast
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = -1;

	if (array && action)
	{
		while (++x < size)
		{
			action(array[x]);
		}
	}
}
