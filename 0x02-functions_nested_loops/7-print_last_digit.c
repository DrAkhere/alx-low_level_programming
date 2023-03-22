#include "main.h"
/**
 * print_last_digit - Entry
 * @r: character from which last digit is printed
 * Return: Always 0
 */

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar((r % 10) + '0');

	return (r % 10);
}
