#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for multiplies of two numbers and prints the result
 * @argc: The argument count
 * @argv: The argument vector
 * Return:Return 0 (successful), 1 (failed)
 */
int main(int argc, char *argv[])
{
	int ans1;
	int ans2;

	ans1 = ans2 = 0;
	if (argc == 3)
	{
		ans1 = atoi(argv[1]);
		ans2 = atoi(argv[2]);
		printf("%d\n", ans1 * ans2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
