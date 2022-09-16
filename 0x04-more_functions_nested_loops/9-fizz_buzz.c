#include <stdio.h>
/**
 * main - prints fizz, buzz on multiples
 * of 3 and 5
 *
 * Return: retuns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i >= 3) && (i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else if ((i >= 5) && (i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
			if (1 < 100)
				printf(" ");
		}
		else if (i > 5 && (i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}

	printf("\n");
	return (0);
}
