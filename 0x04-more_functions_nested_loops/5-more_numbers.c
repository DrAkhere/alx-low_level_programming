#include "main.h"
/**
 * more_numbers - Entry for print x10 of 1 to 14
 * Return: return nothing here
 */
void more_numbers(void)
{
	int n;
	int y;

	y = n = 0;
	while (y < 10)
	{
		while (n <= 14)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		n = 0;
		y++;
	}
}
