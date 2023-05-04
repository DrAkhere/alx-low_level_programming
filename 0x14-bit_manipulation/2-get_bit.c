#include "main.h"

/**
 * get_bit - Entry point to give the value of a bit if a given index
 * @n: The number
 * @index: The index of of the bit been gotten
 * Return: Returns the value of a bit at a given index or -1 if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
