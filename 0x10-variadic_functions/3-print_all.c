#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: character to print
 *
 * Return: 0 sucess
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0, j, k = 0;
	char *s;
	const char f[] = "cifs";

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (f[j])
		{
			if (format[i] == f[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(p, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(p, double)), k = 1;
			break;
		case 's':
			s = va_arg(p, char *), k = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(p);
}
