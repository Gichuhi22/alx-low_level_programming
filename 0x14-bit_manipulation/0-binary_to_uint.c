#include "main.h"

/**
 * num_pow - returns exponential result
 * @base: base number
 * @exp: exponent
 * Return: exponential result
 */

unsigned int num_pow(int base, int exp)
{
	unsigned int result = 1;

	if (exp == 0)
		return (1);

	while (exp != 0)
	{
		result = result * base;
		exp--;
	}
	return (result);
}

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to binary string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, length;
	unsigned int num = 0;

	length = strlen(b);

	if (!b)
	{
		return (0);
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num += num_pow(2, ((length - 1) - i));
		else if (b[i] == '0')
			num += 0;
		else
			return (0);
	}

	return (num);
}

