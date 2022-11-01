#include "main.h"

/**
 * flip_bits - returns number of bits needed to change number
 * @n: input number
 * @m: second number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0, i;

	result = n ^ m;

	for (i = 0; i < 32; i++)
		if (result & (1 << i))
			count++;
	return (count);

}
