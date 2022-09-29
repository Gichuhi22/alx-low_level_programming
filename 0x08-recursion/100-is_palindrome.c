#include "main.h"
#include <string.h>
/**
 * substring - checks if a string is a palindrome or not
 * @s: input pointer
 * @i: integer input for string forward index
 * @j: integer input for string backward index
 *
 * Return: returns an integer value 1 or 0
 */
int substring(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i < j + 1)
	{
		return (substring(s, i + 1, j - 1));
	}

	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: pointer to string input
 *
 * Return: returns integer value 1 or 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (substring(s, 0, length - 1));
}
