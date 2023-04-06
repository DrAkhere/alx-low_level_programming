#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Entry point to print a string in  reverse
 * @s: string to be printed in reverse
 * Return: return nothing at this point
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
