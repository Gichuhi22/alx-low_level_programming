#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number whose factorial is to be returned
 *
 * Return: returns an integer
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fact = n * factorial(n-1);

	return (fact);
}
