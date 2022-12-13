#include "main.h"

/**
 *  print_last_digit - entry point
 *
 * @i: The character to print
 *
 * description - a function that checks for lowercase character c.
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;
	_putchar(n + '0');
	return (n);
}
