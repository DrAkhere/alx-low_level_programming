#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *str_concat - Entry point to concatenates two strings
 * @s1: The first string, s1
 * @s2: The second string, s2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, n;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = string_length(s1) + string_length(s2) + 1;
	concat_str = malloc(sizeof(char) * n);
	/* note this check if null is passed */
	if (concat_str == NULL)
		return (NULL);
	/* now insert s1 into the concatenated string */
	while (s1[x] != '\0')
	{
		concat_str[y] = s1[x];
		x++;
		y++;
	}
	/* now insert s2 into the concatenated string */
	x = 0;
	while (s2[x] != '\0')
	{
		concat_str[y] = s2[x];
		x++;
		y++;
	}
	concat_str[y] = '\0';
	return (concat_str);
}
/**
  * string_length - Entry point to finds the length of a string.
  * Return: length of a
  * @pointer: The  pointer
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
