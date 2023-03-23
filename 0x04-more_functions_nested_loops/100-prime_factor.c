#include <stdio.h>
#include <math.h>
/**
 * main - Entry point that prints the largest prime factor of the number given
 * Return: Always 0
 */
int main(void)
{
	long n;
	long maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (n = 1; n <= square; n++)
	{
		if (num % n == 0)
		{
			maxf = num / n;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
