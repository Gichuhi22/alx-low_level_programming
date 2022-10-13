#include"function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: function pointer to the comparison function
 * Return: returns index of matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);

	return (i);
}
