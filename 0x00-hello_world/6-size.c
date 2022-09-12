#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
	printf("size of a char: %zu \n byte(s)", sizeof(char));
	printf("size of an int: %zu \n byte(s)", sizeof(int));
	printf("size of a long int: %zu \n byte(s)", sizeof(long int));
	printf("size of a long long int: %zu \n byte(s)", sizeof(long long int));
	printf("size of a float: %zu \n byte(s)", sizeof(float));
}
