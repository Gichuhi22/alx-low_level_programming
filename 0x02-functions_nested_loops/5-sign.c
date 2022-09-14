#include "main.h"
/**
 * print_sign - function to print sign of a number
 *
 * @n: the passed parameter
 *
 * Return: returns 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('o');
		return (0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');

}
