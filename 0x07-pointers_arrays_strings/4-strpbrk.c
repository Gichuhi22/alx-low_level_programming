#include "main.h"
/**
 * *_strpbrk - searches and prints a set of bytes
 *@s: pointer to searched string
 *@accept: search condition string
 *
 * Return: returns a string or character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
