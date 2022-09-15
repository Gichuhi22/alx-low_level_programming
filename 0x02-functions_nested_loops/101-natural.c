#include <stdio.h>
/**
 *main - program entry
 *
 * Return: returns 0
 */
int main(void)
{
	int i, j, sum, sum1, sum2;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
		}
	}
	for (j = 0; j < 1024; j++)
	{
		if ((j % 5) == 0)
			sum1 = sum1 + j;
	}
	sum2 = sum + sum1;
	printf("sum of multiples is %d \n", sum2);
	return (0);
}
