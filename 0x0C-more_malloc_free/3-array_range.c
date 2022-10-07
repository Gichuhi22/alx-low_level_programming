#include "main.h"
/**
 * array_range - a function that creates an array of integers and
 * sorts them from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, num;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	num = (max - min) + 1;

	array = malloc(num * sizeof(int));
	if (!array)
	{
		return (NULL);
	}

	for (i = 0; i < num; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
