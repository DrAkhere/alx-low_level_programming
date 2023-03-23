#include "main.h"
/**
 * print_numbers - Entry to orint 0 - 9 followed by a lins
 * Return: return nothing here
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
