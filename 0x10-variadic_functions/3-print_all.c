#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Entry that prints anything.
 * @format: The types of arguments passed to the function.
 * Return: Return nothing.
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int x = 0;
	char *sym;

	va_start(pa, format);
	while (format && format[x])
	{
		switch (format[x++])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				sym = va_arg(pa, char *);
				printf("%s", sym != NULL ? sym : "(nil)");
				break;
			default:
				continue;
		}
		if (format[x])
			printf(", ");
	}
	printf("\n");
}
