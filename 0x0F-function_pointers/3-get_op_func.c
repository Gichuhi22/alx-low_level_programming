#include"3-calc.h"

/**
 *get_op_func - selects the function to perform requested operation
 *@s: operator passed as argument to the program
 *Return: a pointer to the function corresponding with the
 *operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;

		return (ops[i].f);

}
