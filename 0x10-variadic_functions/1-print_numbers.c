#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry point to print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list psbn;
	unsigned int x, pnt;

	va_start(psbn, n);
	for (x = 0; x < n; x++)
	{
		pnt = va_arg(psbn, unsigned int);
		printf("%d", pnt);
		if (separator != 0 && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(psbn);
}

