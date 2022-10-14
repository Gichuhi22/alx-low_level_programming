#include"3-calc.h"
/**
 * main - program entry point
 * @argc: number of string elements in array argv[]
 * @argv: array that stores arguments passed from terminal
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	sign = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*sign == '/' && num2 == 0) || (*sign == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(sign)(num1, num2));

	return (0);
}
