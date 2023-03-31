#include "main.h"
/**
 * rot13 - Entrt point
 * @s: pointer of input string.
 * Return: Returns pointer encoded string.
 */
char *rot13(char *s)
{
	int x, y;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (x = 0; s[x] != '\0'; x++)
	{
		boolean = 0;
		for (y = 0; alpha[y] != '\0' && boolean == 0; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = r[y];
				boolean = 1;
			}
		}
	}
	return (s);
}
