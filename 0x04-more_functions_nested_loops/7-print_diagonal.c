#include "main.h"
/**
 * print_diagonal - Entry to print a diagonal line using \.
 * @n: number of times the character \ should be printed
 * Return: return nothing here
 */
void print_diagonal(int n)
{
	int m;
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (p = 0; p < m; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		_putchar('\n');
		}
	}
}
