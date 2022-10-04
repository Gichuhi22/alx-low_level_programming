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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	}

	return (a);
}
