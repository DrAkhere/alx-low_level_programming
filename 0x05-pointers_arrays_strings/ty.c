#include "main.h"
/**
 * print_rev - Entry point
 * @s: Character to be printed in reverse
 * Retrun: Return nothing here
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		while (x)
		{
			_putchar (s[--x]);
		}
	}
	_putchar('\n');
}
