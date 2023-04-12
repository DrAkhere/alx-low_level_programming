#include "main.h"
#include <string.h>
/**
 * _strncat - Entry point for concatenation using strn
 * @dest: String to be concatenated into
 * @src: string to be concatenated
 * @n: number of character of src to be concatenated
 * Return: Return resulting string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
