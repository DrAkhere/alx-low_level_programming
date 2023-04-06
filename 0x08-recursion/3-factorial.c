#include "main.h"
/**
 * factorial - Entry point for factorial of a number
 * @n: number whose factorial is needed
 * Return: Return the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
