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
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
	l2 = n;
	for (i = 0; i < l2 && src[i] != '\0'; i++)
	{
		dest[l1 + i] = src[i];
	}
	dest[l1 + i] = '\0';
	return (dest);
}
