#include "variadic_functions.h"

/**
 * print_strings - entry point
 *
 * description -  a function that prints strings, followed by a new line
 *
 * @n: The character to print
 * @separator: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
			printf("nil");
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(p);
}
