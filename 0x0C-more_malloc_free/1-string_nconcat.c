#include"main.h"
/**
 *string_nconcat - a function that concatenates two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *@n: string 2 delimiter
 *
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
	{
		s3 = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	}
	else
		s3 = malloc((strlen(s1) + n) * sizeof(char) + 1);
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (i = 0; s2[i] != '\0' && i <= n; i++)
		s3[strlen(s1) + i] = s2[i];

	if (n >= strlen(s2))
		s3[strlen(s1) + strlen(s2) + 1] = '\0';
	else
		s3[strlen(s1) + n + 1] = '\0';

	return (s3);
}
