#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals
 * of square matrices
 *@a: pointer array
 *@size: size of square matrix
 *
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = 0;
	sum1 = 0;
	
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size -1)
			sum1 += a[i];
	}
	printf("%d, %d\n", sum, sum1);
}
