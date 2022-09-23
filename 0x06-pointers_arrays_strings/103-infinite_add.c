#include "main.h"

/**
 * rev_string - reverse the string array
 * @n: pointer to string
 * 
 * Return: nothing
 */
void rev_string(char *n)
{
	int i, j;
	char temp;

	i = 0;
	
	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++,i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}


/**
 * *infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: returns pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while(*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}

	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + carry;

		if (temp_tot >= 10)
			carry = 1;
		else
			carry = 0;

		if (digits >= (size_r -1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);

	return (r);
}
