#include "main.h"
/**
 * puts_half - Entry point
 * @str: Character that half of which is needed
 * Return: return nothing here
 */
void puts_half(char *str)
{
	int L = 0, x, y;

	while (str[L] != '\0')
	{
		L++;
	}
	if (L % 2 == 0)
	{
		y = L / 2;
	}
	else
	{
		y = (L + 1) / 2;
	}
	for (x = y; x < L; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
