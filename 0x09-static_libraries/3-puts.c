#include "main.h"
/**
 * _puts - Entry point
 * @str: string to be printed out
 * Return: return nothing at this point
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
