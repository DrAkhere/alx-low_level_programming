#include "main.h"
/**
 * flip_bits - Entry point to get the number of bits you would need to flip to
 * cont' -  get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits you would need to flip to get from one number to
 * cont' -  another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count;

	count = 0;
	for (x = 8 * sizeof(n) - 1; x >= 0; x--)
	{
		if (((n ^ m) >> x) & 1)
			count++;
	}
	return (count);
}
