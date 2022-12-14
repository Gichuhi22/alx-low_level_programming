#include"main.h"
/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (!array)
	return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		array[i] = 0;

	return (array);
}
