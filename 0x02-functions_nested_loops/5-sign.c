#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: The character to print
 *
 * description - a function that prints the sign of a number
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}

}
