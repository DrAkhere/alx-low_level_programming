#include "main.h"
/**
 * _memcpy - Entry point for function that copy memory area
 * @dest: destination of copied memory
 * @src: memory to be copied
 * @n: sixe of memory to be copied
 * Return: destination after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (x);
}
