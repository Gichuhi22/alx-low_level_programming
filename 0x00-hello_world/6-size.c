#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
/*data type declaration*/
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("the size of an int is: %lu.\n", sizeof(i));
	printf("The size of a long int is: %lu.\n", sizeof(li));
	printf("The size of a character is: %lu.\n", sizeof(c));
	printf("The size of a long long integer is: %lu.\n", sizeof(lli));
	printf("the size of float is: %lu.\n", sizeof(f));

	return (0);



}
