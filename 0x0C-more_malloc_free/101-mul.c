#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - Entry point to check if the string consists of digits
  * @argv: The pointer to current item in argument
  * Return: Return 0 if string is all digits, 1 if string are not all digits
  */
int _isdigit(char *argv)
{
	int x;

	x = 0;
	while (argv[x])
	{
		if (argv[x] >= '0' && argv[x] <= '9')
		{
			x++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
  * _atoi - Entry point that converts a string of ascii digits to their value
  * @s: The pointer to the source string
  * Return: Return the value of digits
  */
int _atoi(char *s)
{
	int x;
	int value;

	x = value = 0;
	while (s[x])
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			value *= 10;
			value += (s[x] - '0');
		}
		x++;
	}
	return (value);
/**
 * main - Entry point for multiplies of two numbers and prints the result
 * @argc: The argument count
 * @argv: The argument vector
 * Return:Return 0 (successful), 1 (failed)
 */
int mul(int argc, char *argv[])
{
	int num1;
	int num2;

	num1 = num2 = 0;
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
