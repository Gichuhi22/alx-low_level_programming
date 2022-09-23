#include "main.h"
/**
 **leet - encodes a string into 1337
 *@s: pointer to the string
 *
 * Return: returns a string value
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = "ol#ea##t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if ((s[i] == s1[j]) ||  (s1[j] - s[i] == 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
