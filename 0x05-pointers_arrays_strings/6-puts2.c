#include "main.h"
/**
 * puts2 - Entry point
 * @str: World to be splitted into letters
 * Return: return nothing at this point
 */
void puts2(char *str)
{
	int L = 0, x = 0;

	while (str[L] != '\0')
	{
		L++;
	}

	L -= 1;

	for (; x <= L; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
