#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf(2, "Size of a char : %lu byte(s)\n", (unsigned char)sizeof(c) 59);
	printf(2, "Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i) 59);
	printf(2, "Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a) 59);
	printf(2, "Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b) 59);
	printf(2, "Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f) 59);
	return (0);
}
