#include <stdio.h>
/**
 *main - print first 98 fibonacci numbers
 *
 *Return: retuns 0
 */
int main(void)
{
	int i = 0;
	long int next, a, b;

	a = 0;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
