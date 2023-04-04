#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point for function that prints sum of two diagonals
 * @a: square matrix of integers
 * @size: size of matrix
 * Return: Return nothing at this point
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int max = size * size;
	int sumi = 0;
	int sumj = 0;

	for (; x < max; x += size + 1)
	{
		sumi += a[x];
	}
	for (x = size - 1; x < max - 1; x += size - 1)
	{
		sumj += a[x];
	}
	printf("%d, %d\n", sumi, sumj);
}
