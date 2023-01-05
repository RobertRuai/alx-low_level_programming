#include "main.h"

/**
 * factorial - entry point
 *
 * description - a function that returns the factorial of a given number
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
