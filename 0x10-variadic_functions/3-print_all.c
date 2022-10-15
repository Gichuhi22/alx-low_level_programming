#include"variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of all arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *str = "cifs";
	int num_args, j, i = 0, c = 0;

	num_args = strlen(format);
	va_start(args, format);
	while (i < num_args)
	{
		j = 0;
		while (str[j])
		{
			if (format[i] == str[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				s = va_arg(args, char*), c = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
