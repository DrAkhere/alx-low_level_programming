#include "main.h"
/**
 * _isupper - Entry to test if a character is upper case
 * @c: Character to be tested
 * Return: if upper 1 else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
