#include "main.h"

/**
 * swap_int - entry point
 *
 * description - a function that swaps the values of two integers.
 *
 * @a: The character to print
 * @b: character to print
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
