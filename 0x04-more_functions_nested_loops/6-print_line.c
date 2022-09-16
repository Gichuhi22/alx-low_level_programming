#include "main.h"
/**
 *print_line - draws a straight line
 *@n: the passed parameter
 *
 *Return: null
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}


