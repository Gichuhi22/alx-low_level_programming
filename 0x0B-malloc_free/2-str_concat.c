#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: returns a pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, length1, length2;
	char *str;

	length1 = 0;
	length2 = 0;

	length1 = strlen(s1);
	length2 = strlen(s2);
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	str = (char *)malloc((length1 + length2) * sizeof(char));

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
		str[i + length1] = s2[i];

	return (str);
}
