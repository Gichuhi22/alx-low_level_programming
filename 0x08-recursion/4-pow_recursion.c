#include "main.h"
/**
 * _pow_recursion - function that returns x power y
 * @x: base integer
 * @y: the power(exponential)
 *
 * Return: Returns an integer value
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
