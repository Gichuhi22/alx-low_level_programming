#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to copy
 *
 * Return: returns a character value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*(dest + i) = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
