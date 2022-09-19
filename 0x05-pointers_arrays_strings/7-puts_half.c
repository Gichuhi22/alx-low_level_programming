#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: pointer
 *
 * Return: null
 */
void puts_half(char *str)
{
	int length, i, n;

	length = strlen(str);
	if (length % 2 == 0)
	{
	for (i = length / 2; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n; i <= length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
