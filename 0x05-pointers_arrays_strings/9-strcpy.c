#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: destination
 * @src: source
 * Return: return the  pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int swp = 0;

	while (src[swp])
	{
		dest[swp] = src[swp];
		swp++;
	}
	return (dest);
}
