#include "main.h"
/**
 * print_triangle - Entry point to priont a triangle
 * @size: the size of the triangle printed with #.
 * Return: return nothing here
 */
void print_triangle(int size)
{
	int m;
	int n;
	int p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = size - n; m > 1; m--)
			{
				_putchar(' ');
			}
			for (p = 0; p <= n; p++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
