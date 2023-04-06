#include "main.h"
#include <stdio.h>
/**
 * checker - Entry point ti checks the input number from n to the base
 * @n: the number that is squared and compared against base
 * @base: the base number to check for
 * Return: Return the natural square root of number base
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - Entry point that return the natural square root of a n
 * @n: the number to check its square roots.
 * Return: Return the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
