#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - Entry point for concatenation
 * @dest: The string to concatenate into
 * @src: The string to be concatenated
 * Return: return resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
