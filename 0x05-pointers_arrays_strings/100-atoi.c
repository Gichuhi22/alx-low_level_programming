#include "main.h"
#include <string.h>
/**
 * _atoi - function to convert a string to integer
 * @s: Pointer to the string to be converted
 *
 * Return: returns an integer value
 */
int _atoi(char *s)
{
	int length, i, Result;

	Result = 0;
	length = strlen(s);

	for (i = 0; 1 < length; i++)
		Result = Result * 10 + (s[i] - 48);

	return length;
}
