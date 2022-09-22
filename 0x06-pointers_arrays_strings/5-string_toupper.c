#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @str: pointer to character string
 *
 * Return: returns a string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (str[i] - ' ');
		}
	}
	return (str);
}
