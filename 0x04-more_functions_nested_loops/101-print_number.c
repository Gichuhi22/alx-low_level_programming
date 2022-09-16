#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: passed parameter
 *
 * Return: null
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
