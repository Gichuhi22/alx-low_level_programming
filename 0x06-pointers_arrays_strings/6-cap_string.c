#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * of a string
 * @str: pointer to the string
 *
 * Return: returns a character value
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	/*chck first letter*/
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if ((str[i] == ' '))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}
