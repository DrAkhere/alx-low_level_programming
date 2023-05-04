#include "main.h"

/**
 * print_binary - Entry point to print the binary representation of a number
 * @n: The number whose binary representation is to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char x;
	int write;

	size = sizeof(n) * 8 - 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	write = 0;

	while (size >= 0)
	{
		x = (n >> size) & 1;
		if (write == 1)
			_putchar(x + '0');
		else
		{
			if (x == 1)
			{
				_putchar(x + '0');
				write = 1;
			}
		}
		size -= 1;
	}
}
