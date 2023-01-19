#include "3-calc.h"

/**
 * get_op_func - entry point
 *
 * description - selects correct function to perform operation asked by user
 *
 * @s: The character to print
 *
 * Return: Always 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i <  5)
	{
		if(*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
