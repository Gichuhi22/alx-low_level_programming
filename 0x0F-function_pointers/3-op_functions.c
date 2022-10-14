#include "3-calc.h"
/**
 *op_add - function that adds two numbers
 *@a: first number
 *@b: seconds number
 *Return: returns an integer sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer difference value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - finds the product of two integer values
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: integer division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
