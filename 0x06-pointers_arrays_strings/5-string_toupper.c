#include "main.h"
/**
 * string_toupper - Entry point to converts all string to uppercase.
 * @c: pointer of the string to convert
 * Return: return converted string.
 */
char *string_toupper(char *c)
{
	int x;

	x = 0;
	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			c[x] -= 'a' - 'A';
		x++;
	}
	return (c);
}
