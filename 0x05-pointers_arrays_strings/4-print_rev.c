#include "main.h"
#include <string.h>
/**
 * print rev - prints a string in reverse
 * @s: the pointer to the string address
 *
 * Return: null
 */
void print_rev(char *s)
{
	int length, i, temp;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	_putchar('\n');
}
