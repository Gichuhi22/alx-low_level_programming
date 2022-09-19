#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: null
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
		if ( i % 2 == 0)
		{
		_putchar(str[i]);
		}
	_putchar('\n');
}
