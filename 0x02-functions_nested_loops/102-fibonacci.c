#include <stdio.h>
/**
 *main - print fibonacci series upto 50
 *
 *Return: retuns 0
 */
int main(void)
{
	int i = 0;
	long int next, a, b;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
