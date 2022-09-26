#include"main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: pointer to the first searched string
 * @needle: pointer to search conditions
 *
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				i++;
				j++;
				return (&haystack[i]);
			}
		}
		
	}
		
	return (0);
}
