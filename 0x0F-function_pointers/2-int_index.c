#include "function_pointers.h"

/**
 * int_index - Entry point to search for integer
 * @array: The inputed array
 * @size: The size of inputed array
 * @cmp: The pointer to the casted function
 * Return: Return -1 if size <= 0,or !(array) or !(cmp) else return x
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = -1;
	if (size <= 0  || !(array) || !(cmp))
	{
		return (-1);
	}
	while (++x < size)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
