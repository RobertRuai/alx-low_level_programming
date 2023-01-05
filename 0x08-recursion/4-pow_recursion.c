#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * description -  a function that returns the
 *		value of x raised to the power of y
 *
 * @x: The character to print
 * @y: The character to print
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
