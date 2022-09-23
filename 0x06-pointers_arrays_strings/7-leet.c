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
	char s1[] = "aAeEoOtTlL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if ((s[i] == s1[j]) && (s[i] == 'a' || s[i] == 'A'))
			{
				s[i] = '4';
			}
			else if ((s[i] == s1[j]) && (s[i] == 'e' || s[i] == 'E'))
			{
				s[i] = '3';
			}
			else if ((s[i] == s1[j]) && (s[i] == 'o' || s[i] == 'O'))
			{
				s[i] = '0';
			}
			else if ((s[i] == s1[j]) && (s[i] == 't' || s[i] == 'T'))
			{
				s[i] = '7';
			}
			else if ((s[i] == s1[j]) && (s[i] == 'l' || s[i] == 'L'))
			{
				s[i] = '1';
			}
		}
	}
	return (s);
}
