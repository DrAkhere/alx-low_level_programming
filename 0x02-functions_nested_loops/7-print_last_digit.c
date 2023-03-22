#include "main.h"
/**
 * print_last_digit - Entry
 * @m: character from which last digit is printed
 * Return: The last digit
 */

int print_last_digit(int m)
{
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar((m % 10) + '0');

	return (m % 10);
}
