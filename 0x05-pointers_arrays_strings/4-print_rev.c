#include "main.h"
/**
 * print_rev - Entry point
 * @s: Character to be printed in reverse
 * Return: Return nothing here
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x)
	{
		_putchar (s[--x]);
	}
	_putchar('\n');
}
