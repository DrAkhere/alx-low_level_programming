#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, rev;
	
	x = rev =  0;
	n -= 1;
	while (x <= n)
	{
		rev = a[n];
		a[n--] = a[x];
		a[x++] = rev;
	}
}
