#include"main.h"

/**
 * num_pow - rerurns exponential result
 * @base: base number
 * @exp: the power
 * Return: exponential result
 */

unsigned long int num_pow(int base, int exp)
{
	unsigned long int result = 1;

	if (exp == 0)
		return (1);

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * get_bit - gets the value of a bit at a given index
 * @n: integer number
 * @index: index
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	num = num_pow(2, index);

	if (num & n)
		return (1);
	else
		return (0);

}
