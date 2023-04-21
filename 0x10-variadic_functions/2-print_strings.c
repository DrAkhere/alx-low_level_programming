#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry point to print string follow by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int x;
	char *wd;

	va_start(str, n);
	for (x = 0; x < n; x++)
	{
		wd = va_arg(str, char*);
		(wd) ? printf("%s", wd) : printf("nil");
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
