#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * countword - Entry point to counts words and the letters in them
 * @str: The string to count
 * @powc: The position of the word to count characters from
 * @fchar: The position of the first letter of the word
 * if powc = 0, count number of chars in the word else count number of words
 * Return: Return countword if powc = 0, length of word if powc > 0,
 * and position of word if powc > 0 && fchar > 0
 */
int countword(char *str, int powc, char fchar)
{
	int x;
	int countwords;
	int countchar;
	int flag;

	str[0] != ' ' ? (countwords = 1) : (countwords = 0);
	for (x = 0, flag = 0; str[x]; x++)
	{
		if (str[x] == ' ' && str[x + 1] != ' ' && str[x + 1] != '\0' && flag == 0)
		{
			countwords++;
			flag = 1;
		}
		if (powc > 0 && powc == countwords)
		{
			if (powc > 0 && powc == countwords && fchar > 0)
			{
				return (x);
			}
			for (countchar = 0; str[x + countchar + 1] != ' '; countchar++)
			{
				;
			}
			return (countchar);
		}
		if (str[x] == ' ')
		{
			flag = 0;
		}
	}
	return (countwords);
}
/**
 * strtow - Entry point to convert a string into a 2d array of words
 * @str: The string to convert
 * Return: Return double pointer to 2d array
 */
char **strtow(char *str)
{
	int wc;
	int x;
	int y;
	int wlen;
	int getfchar;
	int len;
	char **z;

	for (len = 0; str[len]; len++)
	{
		;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	wc = countword(str, 0, 0);
	if (len == 0 || wc == 0)
	{
		return (NULL);
	}
	z = malloc((wc + 1) * sizeof(void *));
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0, wlen = 0; x < wc; x++)
	{
		/* here you Allocate memory for nested elements */
		wlen = countword(str, x + 1, 0);
		if (x == 0 && str[x] != ' ')
		{
			wlen++;
		}
		z[x] = malloc(wlen * sizeof(char) + 1);
		if (z[x] == NULL)
		{
			for ( ; x >= 0; --x)
			{
				free(z[x]);
			}
			free(z);
			return (NULL);
		}
		/*Now initialize each element of the nested array with the word*/
		getfchar = countword(str, x + 1, 1);
		if (str[0] != ' ' && x > 0)
		{
			getfchar++;
		}
		else if (str[0] == ' ')
		{
			getfchar++;
		}
		for (y = 0; y < wlen; y++)
			z[x][y] = str[getfchar + y];
		z[x][y] = '\0';
	}
	z[x] = NULL;
	return (z);
}
