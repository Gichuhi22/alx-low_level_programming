#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: stores the number of arguments passed to main
 * @argv: a string array of all passed arguments to main
 *
 * Return: returns 0(success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
