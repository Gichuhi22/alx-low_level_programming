#include "main.h"

/**
 * flip_bits - returns number of bits needed to change number
 * @n: input number
 * @m: second number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0;

	result = n ^ m;

	while (result)
	{
		result = result & (result - 1);
		count++;
	}
	return (count);

}
