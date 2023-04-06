#include "main.h"
#include <stdio.h>
/**
  * checker - Entry point that checks recursively the input in n
  * @n: number
  * @base: the base number to check
  * Return: Return 0 if n is not a prime, else return 1 otherwise.
  */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
/**
  * is_prime_number - Entry point to checks if the number is a prime number
  * @n: the number to check if it is prime
  * Return: Return 0 if n is a not prime, else return 1 otherwise.
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
