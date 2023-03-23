#include "main.h"
/**
 * _isdigit - Entry point to test if a charater is digit
 * @c: character to be tested
 * Return: 1 if it is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c == 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
