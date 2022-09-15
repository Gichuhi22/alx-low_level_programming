#include "main.h"
/**
 *times_table - prints nine times table
 *
 *Return: nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(44);
			_putchar(32);
			if (k <= 9)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}

}
