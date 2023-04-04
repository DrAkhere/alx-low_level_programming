#include "main.h"
/**
 * _memset - Entry point for function that fills memory with a constant byte.
 * @s: pointer
 * @b: character
 * @n: size of first n byte to fill
 * Return: return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *x = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (x);
}
