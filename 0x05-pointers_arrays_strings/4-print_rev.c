#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the pointer to the string address
 *
 * Return: null
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
