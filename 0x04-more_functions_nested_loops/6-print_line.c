#include "main.h"

/**
 * print_line - entry point
 *
 * description - a function that draws a straight line in the terminal
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		putchar('\n');
	}
}
