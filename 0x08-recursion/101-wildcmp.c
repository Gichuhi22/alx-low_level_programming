#include "main.h"
#include<string.h>
/**
 * wildcmp - compares two strings and returns 1
 * if identical
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: integer value. 1 0r 0
 */

int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return 1;
	if (strcmp(s1, s2) == 0)
		return 1;
	

}
