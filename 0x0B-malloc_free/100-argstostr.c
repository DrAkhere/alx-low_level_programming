#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Entry point to concatenates all arguments of program
 * @ac: The argument count
 * @av: The pointer to argument vectors
 * Return: Return pointer to new buffer with all arguments as 1 string
 */
char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int l;
	int concatlen;
	char *z;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}

	x = y = l = concatlen = 0;
	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			l++;
		}
	}
	z = (char *)malloc(l * sizeof(char) + ac + 1);
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++, concatlen++)
		{
			z[concatlen] = av[x][y];
		}
		z[concatlen] = '\n';
		concatlen++;
	}
	z[concatlen] = '\0';
	return (z);
}
