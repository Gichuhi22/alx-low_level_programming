#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: max number of bytes used
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i]; 
	}
	return (dest);
}
