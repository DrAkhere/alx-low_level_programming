#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Entry point to return the length of a string
 * @s: string whose length is needed
 * Return: nothing at this point
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
