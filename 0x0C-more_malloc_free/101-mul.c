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
}
/**
  * main - Entry point for  the main function call
  * @argc: The argument count
  * @argv: The 2dimension array of arguments
  * Return: Return 0 on success, 98 on failure
  */
int main1(int argc, char *argv[])
{
	int x;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		if (_isdigit(argv[x]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
