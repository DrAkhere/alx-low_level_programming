#include "main.h"
/**
 * _strcmp - Entry point that compares two strings
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x]; x++)
		;
	return (s1[x] - s2[x]);
}
