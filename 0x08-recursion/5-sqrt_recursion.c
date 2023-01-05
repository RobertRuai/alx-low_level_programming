#include "main.h"

/**
 * _sqrt_recursion - entry point
 *
 * description -  a function that returns the natural square root of a number.
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n - i * i <= 0)
		return (-1);
	return (_sqrt_recursion(n / (i + 1)));
}
