#include "main.h"
/**
 * _strlen_recursion - function that prints length of a string
 * using recursion
 * @s: pointer to the string
 *
 * Return: returns length of the string
 */

int _strlen_recursion(char *s)
{
	static int count = 0;

	if (*s != '\0')
	{
		count ++;
		_strlen_recursion(s + 1);
	}
	else
		return(0);

	return (count);
}
