#include "main.h"
/**
 * get_endianness - The entry point to check endianness
 * Return: Return 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *check;

	check = (char *) &x;
	return ((int)check[0]);
}
