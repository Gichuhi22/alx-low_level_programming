#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent
 */

void print_binary(unsigned long int n)
{
	int i, k;

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
