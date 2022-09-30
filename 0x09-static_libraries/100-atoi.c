#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - function to convert a string to integer
 * @s: Pointer to the string to be converted
 *
 * Return: returns an integer value
 */
int _atoi(char *s)
{
	unsigned int i;

	i = strtol(s, NULL, 10);
	return (i);
}
