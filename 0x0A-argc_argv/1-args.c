#include <stdio.h>
#include "main.h"
/**
 * main - Entry point that prints the number of argument a user has passed
 * @argc: The argument count of the programme
 * @argv: The array of the arguments
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);

}
