#include <stdio.h>
/**
 * main - function prints sum of even fibonacci numbers
 *
 *
 *Return: always 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
		sum = sum + next;
	}
	printf("%d\n", sum);
	return (0);

}
