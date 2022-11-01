#include "main.h"

/**
 * set_bit - set value of bit at given index to 1
 * @n: pointer to integer number
 * @index: index value
 * Return: 1 if successful, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	
	mask = 1 << index;
	*n = *n | mask;
	return (*n);
}
