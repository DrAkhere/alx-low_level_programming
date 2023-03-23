#include "main.h"
/**
 * print_square - Entry point to print square
 * @size: size of the square
 * Return: return nothing here
 */
void print_square(int size)
{
	int n;
	int m;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
