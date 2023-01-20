#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 *
 * description -  function that returns the sum of all its parameters
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
