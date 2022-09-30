#include"main.h"
/**
 * main - multiplies two numbers
 * @argc: stores the number of arguments passed to main
 * @argv: array of all passed arguments to main
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	long int i, product = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}
	printf("%ld\n", product);
	}

	return (0);
}
