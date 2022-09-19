#include "main.h"
/**
 *swap_int - swap the values of two integers
 *@a: pointer to integer value
 *@b: pointer to second integer value
 *
 *Return: null
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
