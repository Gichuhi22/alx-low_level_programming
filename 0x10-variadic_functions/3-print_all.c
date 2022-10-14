#include"variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of all arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *str = "cifs";
	int i, num_args, b, j;
	char a;
	float f;

	num_args = strlen(format);
	va_start(args, format);
	for (i = 0; i < num_args; i++)
	{
		switch (format[i])
		{
			case 'c':
				a = va_arg(args, int);
				printf("%c", a);
				break;
			case 'i':
				b = va_arg(args, int);
				printf("%d", b);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
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
		for (j = 0; str[j] != '\0'; j++)
			if (str[j] == format[i] && i < num_args - 1)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
