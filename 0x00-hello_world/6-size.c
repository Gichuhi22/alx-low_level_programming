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

	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(lli));
	printf("size of float: %lu byte(s)\n", sizeof(f));

	return (0);



}
