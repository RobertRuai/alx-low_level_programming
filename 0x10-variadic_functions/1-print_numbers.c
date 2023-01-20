#include "variadic_functions.h"

/**
 * print_numbers - entry point
 *
 * description -  a function that prints numbers, followed by a new line
 *
 * @n: The character to print
 * @separator: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(p);
}
