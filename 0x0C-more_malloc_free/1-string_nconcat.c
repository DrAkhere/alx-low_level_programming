#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Entry point to concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Tje string length of whole or part of s2
 * Return: Return pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int x, y, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; x++)
		;
	for (y = 0; s2[y]; y++)
		;
	y > n ? (y = n) : (n = y);
	size = x + y + 1;
	z = malloc(size * sizeof(char));
	if (z == NULL)
		return (NULL);
	for (i = 0; i < size - 1; i++)
		i < x ? (z[i] = s1[i]) : (z[i] = s2[i - x]);
	z[size] = '\0';
	return (z);
}
