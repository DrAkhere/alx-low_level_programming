#include <stdio.h>
/**
 * main - Entry of printing the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib x, y, z;

	x = 0;
	y = 1;

	for (fib = 0; fib < 50; fib++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);
		if (fib == 49)
			putchar('\n');
		else
		{
			print(", ");
		}
	}
	rerurn (0);
}

