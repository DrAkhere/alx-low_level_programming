#include <stdio.h>
/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int fib;
	unsigned long a, b, c, d, e, f, lift;

	fib = 0;
	a = 0;
	b = 1;

	for (fib = 0; fib <= 91; fib++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1000;
	while (fib <= 98)
	{
		lift = (d + e) / 1000;
		f = (d + e) - lift * 1000;
		c = (a + b) + lift;
		d = e;
		e = f;
		a = b;
		b = c;
		if (f >= 100)
			printf("%lu%lu", c, f);
		else
			printf("%lu0%lu", c, f);
		if (fib != 98)
			printf (", ");
		fib++;
	}
	putchar('\n');
	return (0);
}
