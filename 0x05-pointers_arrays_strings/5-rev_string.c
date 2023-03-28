#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point to print right order
 * @s: Character to be printed in reverse
 * Return: Return nothing here
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * rev_string - Entry point
 * @s: Character to be printed in reverse
 * Return: Return nothing here
 */
void rev_string(char *s)
{
	int x = 0;
	int len = _strlen(s) - 1;
	char a;
	char z;

	while (x < len)
	{
		a = s[x];
		z = s[len];
		s[x++] = z;
		s[len--] = a;
	}
}
