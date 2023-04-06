#include "main.h"
/**
 * _pow_recursion - Entry point that returns the value of x raised to y
 * @x: base number
 * @y: raised power
 * Return: solution of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y <= 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
