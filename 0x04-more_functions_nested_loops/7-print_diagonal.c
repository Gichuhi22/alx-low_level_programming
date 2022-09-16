#include "main.h"
/**
 *print_line - draws a diagonal line
 *@n: the passed parameter
 *
 *Return: null
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n)
			{
				_putchar(32);
			}
			else if (i == n)
			{
				_putchar(92);
				_putchar('\n');
			}

		}
	}
}


