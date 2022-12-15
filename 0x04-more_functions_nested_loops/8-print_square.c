#include "main.h"

/**
 * print_square - entry point
 *
 * description - a function that draws a square in the terminal
 *
 * @size: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
