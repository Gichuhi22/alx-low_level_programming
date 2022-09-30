#include "main.h"
#include <string.h>
/**
 *_puts - prints a string
 *@str: a pointer to the string
 *
 * Return: null
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
