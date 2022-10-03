#include"main.h"
/**
 * create_array - creates an array of chars and initializes
 * it with specific char
 * @size: size of array
 * @c: initializing character
 *
 * Return: returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
