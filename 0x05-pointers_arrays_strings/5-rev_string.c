#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer to string to be reversed
 * Return: null
 */
void rev_string(char *s)
{
	int i, length;
	char temp;

	i = 0;
	length = strlen(s) - 1;

	while (i < length)
	{
		temp = s[length];
		s[length] = s[i];
		s[i] = temp;
		i++;
		length--;
	}
}
