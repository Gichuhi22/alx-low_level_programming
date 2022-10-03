#include"main.h"
/**
 * _strdup - returns a pointer to allocated space in memory
 * with a copy of a string
 * @str: pointer to passed string
 *
 * Return: returns a pointer to a string
 */

char *_strdup(char *str)
{
	int i, length = 0;
	char *str1;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (str == NULL)
	{
		return (NULL);
	}

	str1 = malloc(sizeof(char) * length + 1);

	for (i = 0; str[i] != '\0'; i++)
		str1[i] = str[i];

	if (str1 < str)
		return (NULL);

	str1[length] = '\0';


	return (str1);
}
