#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char noqe, e, q;

	e = 'e';
	q = 'q';

	for (noqe = 'a'; noqe <= 'z'; noqe++)
	{
		if (noqe != e && noqe != q)
			putchar(noqe);
	}
		putchar('\n');

	return (0);
}
