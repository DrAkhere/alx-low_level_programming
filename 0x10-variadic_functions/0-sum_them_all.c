#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry point that sum all its parameter
 * @n: The number of parameters
 * Return: Return (0) if n = 0, else return sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int x;
	unsigned sum = 0;

	va_start(add, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(add, unsigned int);
	}
	va_end(add);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sum);
	}
}

