#include "main.h"
/**
 * *_memset - function that fills memory with a constant
 * byte
 *
 * @s: pointer to address of memory
 * @b: byte to fill memory with
 * @n: size of memory to be filled
 *
 * Return: returns a pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
