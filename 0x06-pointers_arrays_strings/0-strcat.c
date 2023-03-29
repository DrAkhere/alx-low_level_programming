#include "main.h"
#include <string.h>
/**
 * _strcat - Entry point for concatenation
 * @dest: The string to concatenate into
 * @src: The string to be concatenated
 * Return: return resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
