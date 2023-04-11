#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
  * main - Entry point to prints positive numbers, followed by new line
  * @argc: The argument counter
  * @argv: The argument vector
  * Return: return 0, 1 or add
  */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int add = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
			if (!((argv[x][y] >= '0' && argv[x][y] <= '9') || argv[x][y] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		add += atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
