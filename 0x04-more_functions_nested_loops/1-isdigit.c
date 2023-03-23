#include "main.h"
/**
 * _isdigit - Entry point to test if a charater is digit
 * @c: character to be tested
 * Return: 1 if it is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
