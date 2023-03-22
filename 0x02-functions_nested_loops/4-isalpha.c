#include "main.h"
/**
 *_isalpha - Entry point for function that checks for alphabetic character.
 *Return: Always 0
 *@c: character to be tested
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
