#include"main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: address of integer
 * @index: index to set
 * Return: 1 if successful -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, clearbit;

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	clearbit = ~(1 << index);
	mask = *n & clearbit;
	*n = mask | (0 << index);
	return (*n);
}
