#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
	int x, y;
	char sep[] = " \t\n,;.!?\"(){}";
	
	x = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[x] != '\0')
	{
		for (y = 0; sep[y] != '\0'; y++)
			if (s[x - 1] == sep[y] && (s[x] >= 'a' && s[x] <= 'z'))
				s[x] -= ('a' - 'A');
		x++;
	}
	return (s);
}
