#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - Entry point that prints the minimum number of coins to make change
  * @argc: The argument counter
  * @argv: The argument vector
  * Return: return 1 if there is error, else return 0.
  */
int main(int argc, char *argv[])
{
	int ch;
	int no;

	ch = 0;

	if (argc == 2)
	{
		no = atoi(argv[1]);
		if (no > 0)
		{
			for (; no >= 25; ch++)
			{
				no = no - 25;
			}
			for (; no >= 10; ch++)
			{
				no = no - 10;
			}
			for (; no >= 5; ch++)
			{
				no = no - 5;
			}
			for (; no >= 2; ch++)
			{
				no = no - 2;
			}
			for (; no >= 1; ch++)
			{
				no = no - 1;
			}
		}
		printf("%d\n", ch);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
