#include "main.h"
/**
 * _strspn - function that gets the length
 * of a prefix substring
 * @s: pointer to first string
 * @accept: bytes of which the first string is accepted
 *
 * Return: Returns unsigned integer value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
