#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry point for function that locates a substring
 * @haystack: full string
 * @needle: substring
 * Return: either pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *x = needle;
	char *y = haystack;

	while (*haystack)
	{
		y = haystack;
		needle = x;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = y + 1;
	}
	return (NULL);
}
