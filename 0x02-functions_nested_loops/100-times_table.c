#include "main.h"
/**
 * print_times_table - Entry
 * @n: times number
 * Return: Always 0
 */
void print_times_table(int n)
{
	int x;
	int y;
	int r;

	if (!(n > 15 || n < 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				r = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (r < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((r % 10) + '0');
				}
				else if	(r >= 10 && r < 100)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r >= 100 && y != 0)
				{
					_putchar((r / 100) + '0');
					_putchar((r / 10) % 10 + '0');
					_putchar((r % 10) + '0');
				}
				else
					_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
