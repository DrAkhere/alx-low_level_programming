#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * p_char - Entry point to print character
 * @c: The character to print
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * p_integer - Entry point to print integer
 * @i: The integer to print
 */
void p_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * p_float - Entry point to print float
 * @f: The float to print
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * p_string - Entry point to print string
 * @s: The string to print
 */
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}
/**
 * print_all - Entry point to print anything
 * @format: The symbol that represent anything that can be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int x, y;
	char *separator;
	va_list pa;
	v_types valid_types[]{
		{c, p_char},
		{i, p_integer},
		{f, p_float},
		{s, p_string},
	}

	x = y = 0;
	separator = "";
	va_start(pa, format);
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == *valid_types[y])
			{
				printf("%s", separator);
				valid_types[y].f(pa);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
}
