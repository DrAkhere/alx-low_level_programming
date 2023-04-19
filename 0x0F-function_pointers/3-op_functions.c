#include "3-calc.h"
/**
  * op_add - Entry point to addition of 2 numbers
  * @a: The first number
  * @b: The second number
  * Return: Return the sum of the numbers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Entry point to subtraction of 2 numbers
  * @a: The first number
  * @b: The second number
  * Return: Return the difference of the numbers
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Entry point to multiplication of 2  numbers
  * @a: The first number
  * @b: The second number
  * Return: Return the product of the numbers
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Entry point to division of 2 numbers
  * @a: The first number
  * @b: The second number
  * Return: Return the division of a by b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Entry point to division of 2 numbers and returns the remainder
  * @a: The first number
  * @b: The second number
  * Return: Return the remainder of the division
  */
int op_mod(int a, int b)
{
	return (a % b);
}
