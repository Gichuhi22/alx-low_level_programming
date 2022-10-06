#include"main.h"
/**
 * argstostr - concatenates all arguments from main
 * @ac: stores the number of arguments in array av
 * @av: pointer to pointer that stores input from shell
 *
 * Return: returns a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	str = (char *)malloc((length * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);


}
