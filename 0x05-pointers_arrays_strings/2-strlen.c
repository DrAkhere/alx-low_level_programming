#include "main.h"
/**
 * _strlen - Entry point to get the length of a string
 * @s: variable whose length is to be determined
 * Return: Return string length
 */
int _strlen(char *s)
{
	int L = 0;

	while (s[L] != '\0')
		L++;
	return (L);
}
