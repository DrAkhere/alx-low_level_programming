#include "main.h"
/**
 * _strncpy - Entry point to copy string up to n
 * @dest: Destination of string
 * @src: Source of string to copy
 * @n: Number of characters to copy.
 * Return: Pointer destination after copying string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
		dest[x]	= src[x];
	while (x < n)
		dest[x++] = '\0';
	return (dest);
}
