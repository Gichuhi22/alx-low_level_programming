#include"main.h"
/**
 * *_strchr - function to locate a certain character
 * in a string
 *
 * @s: pointer to string
 * @c: passed paramater from main
 *
 * Return: returns char pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
