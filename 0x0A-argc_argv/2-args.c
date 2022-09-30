#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: stores number of arguments passed to main
 * @argv: an array of all passed arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
