#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for function
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; x < atoi(argv[1]); x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
