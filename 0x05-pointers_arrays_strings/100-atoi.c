#include "main.h"
#include <stdio.h>
/**
 * atoi - Entry point
 * @s: string to be converted to integer
 * Return: return the integer
 */
int atoi(char *s)
{
	int sig = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sig *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
		{
			break;
		}
		s++;
	}
	if (sig < 0)
	{
		total = (-total);
	}
	return (total);
}
