#include"main.h"
/**
 * main - adds all positive numbers
 * @argc: counts the number of arguments passed to main
 * @argv: an array that stores all arguments passed on cmd line
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 && *argv[i] > 57)
			 	{
				 	printf("Error\n");
			 	}
			break;
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
