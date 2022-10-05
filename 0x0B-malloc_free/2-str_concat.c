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
	int i;
	char *str;
	int length1 = 0;
	int length2 = 0;

	length1 = strlen(s1);
	length2 = strlen(s2);
	/*if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';*/

	str = (char *)malloc((length1 + length2) * sizeof(char) + 1);
	if (!str)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1 == NULL)
		{
			str[i] = '\0';
		}
		else 
		str[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s2 == NULL)
		{
			str[length1 + i] = '\0';
		}
		else
		str[length1 + i] = s2[i];
	}

	str[length1 + length2] = '\0';

	return (str);
}
