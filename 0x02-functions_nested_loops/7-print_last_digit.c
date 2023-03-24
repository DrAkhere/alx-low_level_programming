#include "main.h"
/**
 * print_last_digit - Entry
 * @m: character from which last digit is printed
 * Return: The last digit
 */
int print_last_digit(int m)
{
	int lastd;

	lastd = m % 10;

	if (m < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
