#include "main.h"

/**
 * prime_num - determines if a number is prime
 * @a: input parameter
 * @b: input parameter
 *
 * Return: an integer value
 */

int prime_num(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_num(a, b + 1));
}

/**
 * is_prime_number - returns  if a number is prime
 * @n: the passed integer number
 *
 *Return: Returns an integer value
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));

}
