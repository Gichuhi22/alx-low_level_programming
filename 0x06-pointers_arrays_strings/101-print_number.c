#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: passed parameter
 *
 * Return: returns null
 */
void print_number(int n)
{
	int i, rem, length, num;
	char str[50];

	length = 0;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	for (i = 0; i < length; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[length - (i + 1)] = rem + 48;
	}
	str[length] = '\0';
}
