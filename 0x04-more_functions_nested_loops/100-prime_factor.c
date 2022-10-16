#include <stdio.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: returns 0
 */
int main(void)
{
	int i, j, isprime, x;
	long int num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			isprime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					isprime = 0;
					break;
				}
			}
			if (isprime == 1)
				x = i;
		}
	}
	printf("%d\n", x);
	return (0);
}
