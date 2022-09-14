#include "main.h"
/**
 *print_last_digit - print tha last digit of a number
 *
 * @i: passed parameter
 *
 *Return: returns value of last digit
 */

int print_last_digit(int i)
{
	int mod;

	mod = i % 10;
	if (mod < 0)
	{
		_putchar(-mod + 48);
		return (-mod);
	}
	else
	{
		_putchar(mod + 48);
		return (mod);
	}
}
