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
	l2 = n - 1;
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
