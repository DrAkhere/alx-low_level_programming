#include "main.h"
/**
 * _strspn - Entry point for function thats gets the length of a substring
 * @s: full string
 * @accept: substring
 * Return: Return the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int flag;
	char *y = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				x++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = y;
		if (flag == 0)
		{
			break;
		}
	}
	return (x);
}
