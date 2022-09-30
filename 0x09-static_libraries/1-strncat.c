#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: max number of bytes used
 *
 * Return: returns a string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, len;

	len = strlen(dest);
	for (j = 0; j < n; j++)
	{
		dest[len + j] = src[j];
	}
	return (dest);
}
