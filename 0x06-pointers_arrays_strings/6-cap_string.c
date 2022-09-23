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
	/*char delimiter[] = "'\t','\n'44,32,59,46,33,63,34,40,41,123,125";*/

	for (i = 0; str[i] != '\0'; i++)
	{
	/*chck first letter*/
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			/*continue;*/
		}
		if ((str[i] == ' ') || (str[i] == '.') || (str[i] == ',') ||
			(str[i] == '\t') || (str[i] == '\n'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}
	return (str);
}
