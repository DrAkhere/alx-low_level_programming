#include "main.h"

/**
 * print_chessboard - Entry point for function that prints the chessboard
 * @a: the array of input to print
 * Return: nothing at this point
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	for (; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
