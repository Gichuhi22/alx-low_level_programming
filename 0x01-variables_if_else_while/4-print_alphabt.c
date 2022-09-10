#include <stdio.h>

/**
 * main - program entry poimt
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (!(ch == 'e' || ch == 'q'))
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
