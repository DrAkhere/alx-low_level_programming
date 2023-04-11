#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point for function that locates a character in a string
 * @s: string that contains character
 * @c: character to be located
 * Return: either pointer to the first occurence of the character or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
