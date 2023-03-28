#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: characters found in the array
 * @n: number of characters in the array
 * Return: return nothing at this point
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
