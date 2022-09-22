#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: returns an integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] > s2[i])
		{
			return (+15);
			break;
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
			break;
		}
		else
			return (0);
	return (0);
}
