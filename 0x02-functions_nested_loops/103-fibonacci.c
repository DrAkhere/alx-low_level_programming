#include <stdio.h>
/**
 * main - Printing sum of even valued fibonacci term.followed by a space
 * Return: Always 0
 */
int main(void)
{
	unsigned long sum, fib, x, y, z;

	x = sum = 0;
	y = 1;

	for (fib = 0; fib < 50; fib++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
