#include"main.h"
/**
 * *_memcpy - function that copies a memory area
 * @dest: destination memory location
 * @src: source momory loction
 * @n: size of memory area to be copied
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
