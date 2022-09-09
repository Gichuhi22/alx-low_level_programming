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

	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(li));
	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of a long long int: %zu bytes(s)\n", sizeof(lli));
	printf("size of float: %zu byte(s)\n", sizeof(f));
	return (0);
}
