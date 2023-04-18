#include <stdio.h>
#include <string.h>

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point to print file name
 * Return: Always 0
 */

int main(void)
{
	_putchar('2');
	_putchar('-');
	_putchar('m');
	_putchar('a');
	_putchar('i');
	_putchar('n');
	_putchar('.');
	_putchar('c');
	_putchar('\n');

	return (0);
}
