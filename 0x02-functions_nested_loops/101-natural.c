#include <stdio.h>
/**
 *main - program entry
 *
 * Return: returns 0
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0i
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
