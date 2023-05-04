#include "main.h"

/**
 * binary_to_uint - Entry point to convert binary to unsigned integer
 * @b: The pointer to a string of 0 and 1 characters
 * Return: Return the converted number or 0 if b is null or char other than 0/1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int x;

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		else if (b[x] =='1')
			unit = (unit << 1) | 1;
		else if (b[x] == '0')
			unit <<= 1;
	}
	return (unit);
}
