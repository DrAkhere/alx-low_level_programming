#include "main.h"
/**
 * clear_bit - Entry point to set the bit if a given index to 1
 * @n: The number
 * @index: The index whose value is tonbe set to 1
 * Return: Return 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(n)) ? -1 : 1);
}
