#include "main.h"
/**
 * set_bit - Entry point to set the value of bit to 0 at a given index
 * @n: The pointer to the number
 * @index: The index whose bit is to be set to zero
 * Return: Return 1 if it worked or -1 if there is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
