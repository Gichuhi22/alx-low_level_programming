#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (i < j)
			{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 && j <= 9)
			putchar(',');
			putchar(' ');
			}

	return (0);


}
