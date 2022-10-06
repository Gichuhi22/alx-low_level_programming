#include"main.h"
/**
 * strtow - function that splits a string into words
 * @str: pointer to string
 *
 * Return: returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	  int i, j;
	  char **s;

	  s = (char **)malloc(strlen(str) * sizeof(char*));
	  if (s == NULL)
		  return (NULL);
	  j = 0;

	  for(i = 0; str[i] != '\0'; i++)
	  {
		  if (str[i] == 32 || str[i] == '\0')
		  {
			  *s[j] = '\0';
			  j = 0;
		  }
		  else
		  {
			  *s[j] = str[i];
			  j++;
		  }
	  }
	  return (s);
}
