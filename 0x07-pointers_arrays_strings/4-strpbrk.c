#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Entry point for function that search a string
 * @s: string to be searched
 * @accept: string been searched for
 * Return: Either accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
		char *x = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = x;
		s++;
	}
	return (NULL);
}
