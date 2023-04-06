#include "main.h"
/**
 * _puts_recursion - Entry point to print a string
 * @s: String to be printed
 * Return: nothing at this point
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
