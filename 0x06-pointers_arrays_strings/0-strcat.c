#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: returns a string
 */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = 0;
	len2 = 0;

	for (i = 0; i != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; i != '\0'; i++)
	{
		len2++;
	}
	for (i = 0; i < '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
