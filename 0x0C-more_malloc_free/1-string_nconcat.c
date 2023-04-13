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
	char *newstr;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = string_length(s1);
	j = string_length(s2);
	newstr = malloc(sizeof(char) * (i * n) + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	/* now insert s1 into newstr */
	while (s1[x] != '\0')
	{
		newstr[y] = s1[x];
		x++;
		y++;
	}
	/* insert s2 into newstr */
	if (n >= j)
	{
		x = 0;
		while (s2[x] != '\0')
		{
			newstr[y] = s2[x];
			x++;
			y++;
		}
	}
	x = 0;
	while ((x + 1) <= n && n <= j)
	{
		newstr[y] = s2[x];
		x++;
		y++;
	}
	newstr[y] = '\0';
	return (newstr);
}
/**
  * string_length - Entry point to finds the length of a string.
  * @pointer: The pointer
  * Return: Returnlength of a
  */
int string_length(char *pointer)
{
	int a = 0;

	while (*(pointer + a) != '\0')
	{
		a++;
	}
	return (a);
}
