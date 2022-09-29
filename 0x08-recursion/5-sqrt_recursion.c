#include "main.h"

/**
 * my_sqrt - finds the square root of a natural number
 * @a: passed parmeter
 * @b: passed parameter
 *
 * Return: integer value
 */
int my_sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (my_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: passed integer parameter
 *
 * Return: returns the square root integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (my_sqrt(n, 1));
}
