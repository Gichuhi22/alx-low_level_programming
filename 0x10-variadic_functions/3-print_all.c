#include"variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of all arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *str;
	int i = 0, num_args = 0, j = 0;

	str = "cifs";
	num_args = strlen(format);
	va_start(args, format);
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		while (str[j] != '\0')
		{
			if (format[i] == str[j] && i < num_args - 1)
			{
				printf(", ");
			} j++;
		} i++;
	}
	printf("\n");
	va_end(args);
}
