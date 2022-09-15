#include "main.h"
/**
 * print_times_table - function that prints n times table
 * @n: passed parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k == 0 || k < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(k + 48);
				}
				else if (k < 100)
				{
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar((k / 100) + 48);
					_putchar(((k - 100) / 10) + 48);
					_putchar((k % 10) + 48);
				}
				if (j < n)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
